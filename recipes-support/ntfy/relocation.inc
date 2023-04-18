export sites="cloud.google.com/go/compute/metadata \
	cloud.google.com/go/compute \
	cloud.google.com/go/firestore \
	cloud.google.com/go/iam \
	cloud.google.com/go/longrunning \
	cloud.google.com/go/storage \
	cloud.google.com/go \
	firebase.google.com/go/v4 \
	github.com/AlekSi/pointer \
	github.com/beorn7/perks \
	github.com/BurntSushi/toml \
	github.com/cespare/xxhash/v2 \
	github.com/cpuguy83/go-md2man/v2 \
	github.com/davecgh/go-spew \
	github.com/emersion/go-sasl \
	github.com/emersion/go-smtp \
	github.com/gabriel-vasile/mimetype \
	github.com/golang/groupcache \
	github.com/golang-jwt/jwt/v4 \
	github.com/golang/protobuf \
	github.com/googleapis/enterprise-certificate-proxy \
	github.com/googleapis/gax-go/v2 \
	github.com/google/go-cmp \
	github.com/google/uuid \
	github.com/gorilla/websocket \
	github.com/kr/pretty \
	github.com/mattn/go-sqlite3 \
	github.com/matttproud/golang_protobuf_extensions \
	github.com/MicahParks/keyfunc \
	github.com/olebedev/when \
    github.com/pkg/errors \
	github.com/pmezard/go-difflib \
	github.com/prometheus/client_golang \
	github.com/prometheus/client_model \
	github.com/prometheus/common \
	github.com/prometheus/procfs \
	github.com/russross/blackfriday/v2 \
	github.com/stretchr/objx \
	github.com/stretchr/testify \
	github.com/stripe/stripe-go/v74 \
	github.com/urfave/cli/v2 \
	github.com/xrash/smetrics \
	golang.org/x/crypto \
	golang.org/x/net \
	golang.org/x/oauth2 \
	golang.org/x/sync \
	golang.org/x/sys \
	golang.org/x/term \
	golang.org/x/text \
	golang.org/x/time \
	golang.org/x/xerrors \
	google.golang.org/api \
	google.golang.org/appengine \
	google.golang.org/appengine/v2 \
	google.golang.org/genproto \
	google.golang.org/grpc \
	google.golang.org/protobuf \
	go.opencensus.io \
	gopkg.in/yaml.v2 \
	gopkg.in/yaml.v3 \
	"

do_compile:prepend() {
    cd ${S}/src/import
    for s in $sites; do
        site_dest=$(echo $s | cut -d: -f1)
        site_source=$(echo $s | cut -d: -f2)
        force_flag=$(echo $s | cut -d: -f3)
        mkdir -p vendor.copy/$site_dest
        if [ -n "$force_flag" ]; then
	    echo "[INFO] $site_dest: force copying .go files"
	    rm -rf vendor.copy/$site_dest
	    rsync -a --exclude='vendor/' --exclude='.git/' vendor.fetch/$site_source/ vendor.copy/$site_dest
        else
            [ -n "$(ls -A vendor.copy/$site_dest/*.go 2> /dev/null)" ] && { echo "[INFO] vendor.fetch/$site_source -> $site_dest: go copy skipped (files present)" ; true ; } || { echo "[INFO] $site_dest: copying .go files" ; rsync -a --exclude='vendor/' --exclude='.git/' vendor.fetch/$site_source/ vendor.copy/$site_dest ; }
        fi
    done
}
