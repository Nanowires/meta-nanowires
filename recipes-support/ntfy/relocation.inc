export sites="gopkg.in/yaml.v2:gopkg.in/yaml.v2:force \
           go.opencensus.io:go.opencensus.io:force \
           golang.org/x/net:golang.org/x/net:force \
           golang.org/x/sys:golang.org/x/sys:force \
           gopkg.in/yaml.v3:gopkg.in/yaml.v3:force \
           golang.org/x/sync:golang.org/x/sync:force \
           golang.org/x/term:golang.org/x/term:force \
           golang.org/x/time:golang.org/x/time:force \
           golang.org/x/text:golang.org/x/text:force \
           golang.org/x/crypto:golang.org/x/crypto:force \
           golang.org/x/oauth2:golang.org/x/oauth2:force \
           cloud.google.com/go:cloud.google.com/go:force \
           github.com/kr/pretty:github.com/kr/pretty:force \
           golang.org/x/xerrors:golang.org/x/xerrors:force \
           google.golang.org/api:google.golang.org/api:force \
           github.com/pkg/errors:github.com/pkg/errors:force \
           github.com/google/uuid:github.com/google/uuid:force \
           google.golang.org/grpc:google.golang.org/grpc:force \
           github.com/beorn7/perks:github.com/beorn7/perks:force \
           github.com/olebedev/when:github.com/olebedev/when:force \
           github.com/urfave/cli/v2:github.com/urfave/cli/v2:force \
           github.com/google/go-cmp:github.com/google/go-cmp:force \
           github.com/stretchr/objx:github.com/stretchr/objx:force \
           firebase.google.com/go/v4:firebase.google.com/go/v4:force \
           cloud.google.com/go/iam:cloud.google.com/go/iam/iam:force \
           github.com/AlekSi/pointer:github.com/AlekSi/pointer:force \
           github.com/xrash/smetrics:github.com/xrash/smetrics:force \
           github.com/BurntSushi/toml:github.com/BurntSushi/toml:force \
           github.com/davecgh/go-spew:github.com/davecgh/go-spew:force \
           github.com/golang/protobuf:github.com/golang/protobuf:force \
           google.golang.org/genproto:google.golang.org/genproto:force \
           google.golang.org/protobuf:google.golang.org/protobuf:force \
           github.com/emersion/go-smtp:github.com/emersion/go-smtp:force \
           github.com/mattn/go-sqlite3:github.com/mattn/go-sqlite3:force \
           github.com/stretchr/testify:github.com/stretchr/testify:force \
           github.com/emersion/go-sasl:github.com/emersion/go-sasl:force \
           google.golang.org/appengine:google.golang.org/appengine:force \
           github.com/gorilla/websocket:github.com/gorilla/websocket:force \
           github.com/cespare/xxhash/v2:github.com/cespare/xxhash/v2:force \
           github.com/golang-jwt/jwt/v4:github.com/golang-jwt/jwt/v4:force \
           github.com/golang/groupcache:github.com/golang/groupcache:force \
           github.com/prometheus/common:github.com/prometheus/common:force \
           github.com/prometheus/procfs:github.com/prometheus/procfs:force \
           github.com/MicahParks/keyfunc:github.com/MicahParks/keyfunc:force \
           github.com/pmezard/go-difflib:github.com/pmezard/go-difflib:force \
           google.golang.org/appengine/v2:google.golang.org/appengine/v2:force \
           cloud.google.com/go/storage:cloud.google.com/go/storage/storage:force \
           github.com/stripe/stripe-go/v74:github.com/stripe/stripe-go/v74:force \
           cloud.google.com/go/compute:cloud.google.com/go/compute/compute:force \
           github.com/googleapis/gax-go:github.com/googleapis/gax-go/v2:force \
           github.com/cpuguy83/go-md2man/v2:github.com/cpuguy83/go-md2man/v2:force \
           cloud.google.com/go/firestore:cloud.google.com/go/firestore/firestore:force \
           github.com/gabriel-vasile/mimetype:github.com/gabriel-vasile/mimetype:force \
           github.com/prometheus/client_model:github.com/prometheus/client_model:force \
           github.com/russross/blackfriday/v2:github.com/russross/blackfriday/v2:force \
           github.com/prometheus/client_golang:github.com/prometheus/client_golang:force \
           cloud.google.com/go/longrunning:cloud.google.com/go/longrunning/longrunning:force \
           cloud.google.com/go/compute/metadata:cloud.google.com/go/compute/metadata/compute/metadata:force \
           github.com/matttproud/golang_protobuf_extensions:github.com/matttproud/golang_protobuf_extensions:force \
           github.com/googleapis/enterprise-certificate-proxy:github.com/googleapis/enterprise-certificate-proxy:force"

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
