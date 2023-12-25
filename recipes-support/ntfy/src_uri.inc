#       gopkg.in/yaml.v2 v2.4.0
# [1] git ls-remote https://github.com/go-yaml/yaml 7649d4548cb53a614db133b2a8ac1f31859dda8c
SRCREV_yaml.v2="7649d4548cb53a614db133b2a8ac1f31859dda8c"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/yaml.v2"

#       go.opencensus.io v0.24.0
# [1] git ls-remote https://github.com/census-instrumentation/opencensus-go b1a01ee95db0e690d91d7193d037447816fae4c5
SRCREV_go.opencensus.io="b1a01ee95db0e690d91d7193d037447816fae4c5"
SRC_URI += "git://github.com/census-instrumentation/opencensus-go;name=go.opencensus.io;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/go.opencensus.io"

#       golang.org/x/net v0.14.0
# [1] git ls-remote https://go.googlesource.com/net c8c0290b421c479315f66c7b68b617ef6e73c668
SRCREV_net="c8c0290b421c479315f66c7b68b617ef6e73c668"
SRC_URI += "git://go.googlesource.com/net;name=net;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/net"

#       golang.org/x/sys v0.11.0
# [1] git ls-remote https://go.googlesource.com/sys 104d4017fa052d31a480218d213787543bc352d4
SRCREV_sys="104d4017fa052d31a480218d213787543bc352d4"
SRC_URI += "git://go.googlesource.com/sys;name=sys;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/sys"

#       gopkg.in/yaml.v3 v3.0.1
# [1] git ls-remote https://github.com/go-yaml/yaml f6f7691b1fdeb513f56608cd2c32c51f8194bf51
SRCREV_yaml.v3="f6f7691b1fdeb513f56608cd2c32c51f8194bf51"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/gopkg.in/yaml.v3"

#       golang.org/x/sync v0.3.0
# [1] git ls-remote https://go.googlesource.com/sync 93782cc822b6b554cb7df40332fd010f0473cbc8
SRCREV_sync="93782cc822b6b554cb7df40332fd010f0473cbc8"
SRC_URI += "git://go.googlesource.com/sync;name=sync;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/sync"

#       golang.org/x/term v0.11.0
# [1] git ls-remote https://go.googlesource.com/term 19e73c2b80b7ca68dd9c38657aa5cf5db9424a3c
SRCREV_term="19e73c2b80b7ca68dd9c38657aa5cf5db9424a3c"
SRC_URI += "git://go.googlesource.com/term;name=term;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/term"

#       golang.org/x/time v0.3.0
# [1] git ls-remote https://go.googlesource.com/time 2c09566ef13fb5556401ddff3c53c3dbc2a42dac
SRCREV_time="2c09566ef13fb5556401ddff3c53c3dbc2a42dac"
SRC_URI += "git://go.googlesource.com/time;name=time;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/time"

#       golang.org/x/text v0.12.0
# [1] git ls-remote https://go.googlesource.com/text fb697c0580b4b6ab0a21ca17e64788b981fb6018
SRCREV_x-text="fb697c0580b4b6ab0a21ca17e64788b981fb6018"
SRC_URI += "git://go.googlesource.com/text;name=x-text;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/text"

#       github.com/kr/text v0.2.0
# [1] git ls-remote https://github.com/kr/text 702c74938df48b97370179f33ce2107bd7ff3b3e
SRCREV_text="702c74938df48b97370179f33ce2107bd7ff3b3e"
SRC_URI += "git://github.com/kr/text;name=text;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/kr/text"

#       golang.org/x/crypto v0.12.0
# [1] git ls-remote https://go.googlesource.com/crypto b4ddeeda5bc71549846db71ba23e83ecb26f36ed
SRCREV_crypto="b4ddeeda5bc71549846db71ba23e83ecb26f36ed"
SRC_URI += "git://go.googlesource.com/crypto;name=crypto;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/crypto"

#       golang.org/x/oauth2 v0.11.0
# [1] git ls-remote https://go.googlesource.com/oauth2 2e4a4e2bfb69ca7609cb423438c55caa131431c1
SRCREV_oauth2="2e4a4e2bfb69ca7609cb423438c55caa131431c1"
SRC_URI += "git://go.googlesource.com/oauth2;name=oauth2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/oauth2"

#       cloud.google.com/go v0.110.7
# [1] git ls-remote https://github.com/googleapis/google-cloud-go b02bde85f81b4c33be7616c7cd388b335d967037
SRCREV_go="b02bde85f81b4c33be7616c7cd388b335d967037"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/cloud.google.com/go"

#       golang.org/x/xerrors v0.0.0-20220907171357-04be3eba64a2
# [1] git ls-remote https://go.googlesource.com/xerrors 04be3eba64a22a838cdb17b8dca15a52871c08b4
SRCREV_xerrors="04be3eba64a22a838cdb17b8dca15a52871c08b4"
SRC_URI += "git://go.googlesource.com/xerrors;name=xerrors;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/golang.org/x/xerrors"

#       google.golang.org/api v0.138.0
# [1] git ls-remote https://github.com/googleapis/google-api-go-client 85e7e701156850dc39c0d0bfc48040bc25b6297f
SRCREV_api="85e7e701156850dc39c0d0bfc48040bc25b6297f"
SRC_URI += "git://github.com/googleapis/google-api-go-client;name=api;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/api"

#       github.com/pkg/errors v0.9.1
# [1] git ls-remote https://github.com/pkg/errors 614d223910a179a466c1767a985424175c39b465
SRCREV_errors="614d223910a179a466c1767a985424175c39b465"
SRC_URI += "git://github.com/pkg/errors;name=errors;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/pkg/errors"

#       github.com/google/uuid v1.3.0
# [1] git ls-remote https://github.com/google/uuid 44b5fee7c49cf3bcdf723f106b36d56ef13ccc88
SRCREV_uuid="44b5fee7c49cf3bcdf723f106b36d56ef13ccc88"
SRC_URI += "git://github.com/google/uuid;name=uuid;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/uuid"

#       google.golang.org/grpc v1.57.0
# [1] git ls-remote https://github.com/grpc/grpc-go 87bf02ad24f6cc071d2553eb5d62332194bba1fe
SRCREV_grpc="87bf02ad24f6cc071d2553eb5d62332194bba1fe"
SRC_URI += "git://github.com/grpc/grpc-go;name=grpc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/grpc"

#       cloud.google.com/go/iam v1.1.2
# [1] git ls-remote https://github.com/googleapis/google-cloud-go 2952e20ee68a2b19732083a6e359d15e850a987c
SRCREV_iam="2952e20ee68a2b19732083a6e359d15e850a987c"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=iam;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/cloud.google.com/go/iam"

#       github.com/beorn7/perks v1.0.1
# [1] git ls-remote https://github.com/beorn7/perks 37c8de3658fcb183f997c4e13e8337516ab753e6
SRCREV_perks="37c8de3658fcb183f997c4e13e8337516ab753e6"
SRC_URI += "git://github.com/beorn7/perks;name=perks;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/beorn7/perks"

#       github.com/olebedev/when v1.0.0
# [1] git ls-remote https://github.com/olebedev/when 028b87cce5e22f68097327a34d659a9a1fca6bfe
SRCREV_when="028b87cce5e22f68097327a34d659a9a1fca6bfe"
SRC_URI += "git://github.com/olebedev/when;name=when;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/olebedev/when"

#       github.com/urfave/cli/v2 v2.25.7
# [1] git ls-remote https://github.com/urfave/cli c023d9bc5a3122830c9355a0a8c17137e0c8556f
SRCREV_cli-v2="c023d9bc5a3122830c9355a0a8c17137e0c8556f"
SRC_URI += "git://github.com/urfave/cli;name=cli-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/urfave/cli/v2"

#       github.com/google/go-cmp v0.5.9
# [1] git ls-remote https://github.com/google/go-cmp a97318bf6562f2ed2632c5f985db51b1bc5bdcd0
SRCREV_go-cmp="a97318bf6562f2ed2632c5f985db51b1bc5bdcd0"
SRC_URI += "git://github.com/google/go-cmp;name=go-cmp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/go-cmp"

#       github.com/google/s2a-go v0.1.5
# [1] git ls-remote https://github.com/google/s2a-go ab15cb590c7ae2cac7e1928843ec29bd6eb69356
SRCREV_s2a-go="ab15cb590c7ae2cac7e1928843ec29bd6eb69356"
SRC_URI += "git://github.com/google/s2a-go;name=s2a-go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/google/s2a-go"

#       github.com/stretchr/objx v0.5.0
# [1] git ls-remote https://github.com/stretchr/objx 50a2c064be99303c5dddf725da60e30fbc4f6ede
SRCREV_objx="50a2c064be99303c5dddf725da60e30fbc4f6ede"
SRC_URI += "git://github.com/stretchr/objx;name=objx;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/stretchr/objx"

#       firebase.google.com/go/v4 v4.12.0
# [1] git ls-remote https://github.com/firebase/firebase-admin-go 74c9bd5edece6044ba365a04c32c00074006dd7c
SRCREV_v4="74c9bd5edece6044ba365a04c32c00074006dd7c"
SRC_URI += "git://github.com/firebase/firebase-admin-go;name=v4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/firebase.google.com/go/v4"

#       github.com/AlekSi/pointer v1.2.0
# [1] git ls-remote https://github.com/AlekSi/pointer 039be97b958cc3cbeb2329617d2e493bd2331fac
SRCREV_pointer="039be97b958cc3cbeb2329617d2e493bd2331fac"
SRC_URI += "git://github.com/AlekSi/pointer;name=pointer;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/AlekSi/pointer"

#       github.com/golang-jwt/jwt v3.2.2+incompatible
# [1] git ls-remote https://github.com/golang-jwt/jwt 4bbdd8ac624fc7a9ef7aec841c43d99b5fe65a29
SRCREV_jwt="4bbdd8ac624fc7a9ef7aec841c43d99b5fe65a29"
SRC_URI += "git://github.com/golang-jwt/jwt;name=jwt;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/golang-jwt/jwt"

#       github.com/xrash/smetrics v0.0.0-20201216005158-039620a65673
# [1] git ls-remote https://github.com/xrash/smetrics 039620a656736e6ad994090895784a7af15e0b80
SRCREV_smetrics="039620a656736e6ad994090895784a7af15e0b80"
SRC_URI += "git://github.com/xrash/smetrics;name=smetrics;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/xrash/smetrics"

#       github.com/BurntSushi/toml v1.3.2
# [1] git ls-remote https://github.com/BurntSushi/toml b324da5ffbb2a87e4a611b1703bd03bffbe7ffbf
SRCREV_toml="b324da5ffbb2a87e4a611b1703bd03bffbe7ffbf"
SRC_URI += "git://github.com/BurntSushi/toml;name=toml;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/BurntSushi/toml"

#       github.com/davecgh/go-spew v1.1.1
# [1] git ls-remote https://github.com/davecgh/go-spew 8991bc29aa16c548c550c7ff78260e27b9ab7c73
SRCREV_go-spew="8991bc29aa16c548c550c7ff78260e27b9ab7c73"
SRC_URI += "git://github.com/davecgh/go-spew;name=go-spew;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/davecgh/go-spew"

#       github.com/golang/protobuf v1.5.3
# [1] git ls-remote https://github.com/golang/protobuf 5d5e8c018a13017f9d5b8bf4fad64aaa42a87308
SRCREV_protobuf="5d5e8c018a13017f9d5b8bf4fad64aaa42a87308"
SRC_URI += "git://github.com/golang/protobuf;name=protobuf;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/golang/protobuf"

#       google.golang.org/genproto v0.0.0-20230815205213-6bfd019c3878
# [1] git ls-remote https://github.com/googleapis/go-genproto 6bfd019c38784710199100ff00bcac6ae21597d9
SRCREV_genproto="6bfd019c38784710199100ff00bcac6ae21597d9"
SRC_URI += "git://github.com/googleapis/go-genproto;name=genproto;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/genproto"

#       google.golang.org/protobuf v1.31.0
# [1] git ls-remote https://github.com/protocolbuffers/protobuf-go 68463f0e96c93bc19ef36ccd3adfe690bfdb568c
SRCREV_google.golang.org-protobuf="68463f0e96c93bc19ef36ccd3adfe690bfdb568c"
SRC_URI += "git://github.com/protocolbuffers/protobuf-go;name=google.golang.org-protobuf;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/protobuf"

#       cloud.google.com/go/storage v1.32.0
# [1] git ls-remote https://github.com/googleapis/google-cloud-go fbe78a28e01043b059e86c6e960d092b299ac9a4
SRCREV_storage="fbe78a28e01043b059e86c6e960d092b299ac9a4"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=storage;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/cloud.google.com/go/storage"

#       github.com/emersion/go-smtp v0.17.0
# [1] git ls-remote https://github.com/emersion/go-smtp b4236a6d6ff4a5cd166ce0cec02b92c66f6dd3d0
SRCREV_go-smtp="b4236a6d6ff4a5cd166ce0cec02b92c66f6dd3d0"
SRC_URI += "git://github.com/emersion/go-smtp;name=go-smtp;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/emersion/go-smtp"

#       github.com/mattn/go-sqlite3 v1.14.17
# [1] git ls-remote https://github.com/mattn/go-sqlite3 f08f1b6b9ce62b2496d8d64df26c1e278887bc1c
SRCREV_go-sqlite3="f08f1b6b9ce62b2496d8d64df26c1e278887bc1c"
SRC_URI += "git://github.com/mattn/go-sqlite3;name=go-sqlite3;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/mattn/go-sqlite3"

#       github.com/stretchr/testify v1.8.1
# [1] git ls-remote https://github.com/stretchr/testify b747d7c5f853d017ddbc5e623d026d7fc2770a58
SRCREV_testify="b747d7c5f853d017ddbc5e623d026d7fc2770a58"
SRC_URI += "git://github.com/stretchr/testify;name=testify;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/stretchr/testify"

#       cloud.google.com/go/compute v1.23.0
# [1] git ls-remote https://github.com/googleapis/google-cloud-go 4a23c37ecf13804fa5126211c5719969e62e4cea
SRCREV_compute="4a23c37ecf13804fa5126211c5719969e62e4cea"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=compute;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/cloud.google.com/go/compute"

#       github.com/emersion/go-sasl v0.0.0-20220912192320-0145f2c60ead
# [1] git ls-remote https://github.com/emersion/go-sasl 0145f2c60eadf52ac05a550c127adce4a266feeb
SRCREV_go-sasl="0145f2c60eadf52ac05a550c127adce4a266feeb"
SRC_URI += "git://github.com/emersion/go-sasl;name=go-sasl;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/emersion/go-sasl"

#       google.golang.org/appengine v1.6.7
# [1] git ls-remote https://github.com/golang/appengine 5d1c1d03f8703c2e81478d9a30e9afa2d3e4bd8a
SRCREV_appengine="5d1c1d03f8703c2e81478d9a30e9afa2d3e4bd8a"
SRC_URI += "git://github.com/golang/appengine;name=appengine;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/appengine"

#       github.com/gorilla/websocket v1.5.0
# [1] git ls-remote https://github.com/gorilla/websocket 9111bb834a68b893cebbbaed5060bdbc1d9ab7d2
SRCREV_websocket="9111bb834a68b893cebbbaed5060bdbc1d9ab7d2"
SRC_URI += "git://github.com/gorilla/websocket;name=websocket;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/gorilla/websocket"

#       github.com/cespare/xxhash/v2 v2.2.0
# [1] git ls-remote https://github.com/cespare/xxhash a76eb16a93c1e30527c073ca831d9048b4b935f6
SRCREV_xxhash-v2="a76eb16a93c1e30527c073ca831d9048b4b935f6"
SRC_URI += "git://github.com/cespare/xxhash;name=xxhash-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/cespare/xxhash/v2"

#       github.com/golang-jwt/jwt/v4 v4.5.0
# [1] git ls-remote https://github.com/golang-jwt/jwt 9358574a7a1a2c8d644f22b6e8de627ba85c58d0
SRCREV_jwt-v4="9358574a7a1a2c8d644f22b6e8de627ba85c58d0"
SRC_URI += "git://github.com/golang-jwt/jwt;name=jwt-v4;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/golang-jwt/jwt/v4"

#       github.com/golang/groupcache v0.0.0-20210331224755-41bb18bfe9da
# [1] git ls-remote https://github.com/golang/groupcache 41bb18bfe9da5321badc438f91158cd790a33aa3
SRCREV_groupcache="41bb18bfe9da5321badc438f91158cd790a33aa3"
SRC_URI += "git://github.com/golang/groupcache;name=groupcache;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/golang/groupcache"

#       github.com/prometheus/common v0.44.0
# [1] git ls-remote https://github.com/prometheus/common 94bf9828e56d9670579b28a9f78237d3cd8d0395
SRCREV_common="94bf9828e56d9670579b28a9f78237d3cd8d0395"
SRC_URI += "git://github.com/prometheus/common;name=common;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/prometheus/common"

#       github.com/prometheus/procfs v0.11.1
# [1] git ls-remote https://github.com/prometheus/procfs 113c5013dda3c600bda241d86c64258ec7117c7b
SRCREV_procfs="113c5013dda3c600bda241d86c64258ec7117c7b"
SRC_URI += "git://github.com/prometheus/procfs;name=procfs;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/prometheus/procfs"

#       cloud.google.com/go/firestore v1.12.0
# [1] git ls-remote https://github.com/googleapis/google-cloud-go 3964c93143f33ceb95a42be357e2119a56cd8975
SRCREV_firestore="3964c93143f33ceb95a42be357e2119a56cd8975"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=firestore;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/cloud.google.com/go/firestore"

#       github.com/MicahParks/keyfunc v1.9.0
# [1] git ls-remote https://github.com/MicahParks/keyfunc f76c64fa36d9b7e4a96547313dcb651d54aa006b
SRCREV_keyfunc="f76c64fa36d9b7e4a96547313dcb651d54aa006b"
SRC_URI += "git://github.com/MicahParks/keyfunc;name=keyfunc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/MicahParks/keyfunc"

#       github.com/pmezard/go-difflib v1.0.0
# [1] git ls-remote https://github.com/pmezard/go-difflib 792786c7400a136282c1664665ae0a8db921c6c2
SRCREV_go-difflib="792786c7400a136282c1664665ae0a8db921c6c2"
SRC_URI += "git://github.com/pmezard/go-difflib;name=go-difflib;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/pmezard/go-difflib"

#       google.golang.org/appengine/v2 v2.0.4
# [1] git ls-remote https://github.com/golang/appengine d41edd396747399499dafcc089c87fd5a6808bc3
SRCREV_appengine-v2="d41edd396747399499dafcc089c87fd5a6808bc3"
SRC_URI += "git://github.com/golang/appengine;name=appengine-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/appengine/v2"

#       github.com/stripe/stripe-go/v74 v74.30.0
# [1] git ls-remote https://github.com/stripe/stripe-go fc96e232f3a79a5203f3e94563209409205a06b5
SRCREV_v74="fc96e232f3a79a5203f3e94563209409205a06b5"
SRC_URI += "git://github.com/stripe/stripe-go;name=v74;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/stripe/stripe-go/v74"

#       cloud.google.com/go/longrunning v0.5.1
# [1] git ls-remote https://github.com/googleapis/google-cloud-go cdfd26840ecae6f823b2f7cae293a78c569a0a87
SRCREV_longrunning="cdfd26840ecae6f823b2f7cae293a78c569a0a87"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=longrunning;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/cloud.google.com/go/longrunning"

#       github.com/googleapis/gax-go/v2 v2.12.0
# [1] git ls-remote https://github.com/googleapis/gax-go db3387b70e605dfc1f09513359d396496a91c66b
SRCREV_gax-go-v2="db3387b70e605dfc1f09513359d396496a91c66b"
SRC_URI += "git://github.com/googleapis/gax-go;name=gax-go-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/googleapis/gax-go/v2"

#       github.com/cpuguy83/go-md2man/v2 v2.0.2
# [1] git ls-remote https://github.com/cpuguy83/go-md2man d97078115282836e16d0dca10b4b42ce60fc70e6
SRCREV_v2="d97078115282836e16d0dca10b4b42ce60fc70e6"
SRC_URI += "git://github.com/cpuguy83/go-md2man;name=v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/cpuguy83/go-md2man/v2"

#       github.com/gabriel-vasile/mimetype v1.4.2
# [1] git ls-remote https://github.com/gabriel-vasile/mimetype 6f575b3e3509415374009db9cb81d6eae1fdfefb
SRCREV_mimetype="6f575b3e3509415374009db9cb81d6eae1fdfefb"
SRC_URI += "git://github.com/gabriel-vasile/mimetype;name=mimetype;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/gabriel-vasile/mimetype"

#       github.com/prometheus/client_model v0.4.0
# [1] git ls-remote https://github.com/prometheus/client_model 91c3945f2cfbfb9040e34a0b6764d804b5a5a490
SRCREV_client_model="91c3945f2cfbfb9040e34a0b6764d804b5a5a490"
SRC_URI += "git://github.com/prometheus/client_model;name=client_model;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/prometheus/client_model"

#       github.com/russross/blackfriday/v2 v2.1.0
# [1] git ls-remote https://github.com/russross/blackfriday 4c9bf9512682b995722660a4196c0013228e2049
SRCREV_blackfriday-v2="4c9bf9512682b995722660a4196c0013228e2049"
SRC_URI += "git://github.com/russross/blackfriday;name=blackfriday-v2;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/russross/blackfriday/v2"

#       github.com/prometheus/client_golang v1.16.0
# [1] git ls-remote https://github.com/prometheus/client_golang 3583c1e1d085b75cab406c78b015562d45552b39
SRCREV_client_golang="3583c1e1d085b75cab406c78b015562d45552b39"
SRC_URI += "git://github.com/prometheus/client_golang;name=client_golang;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/prometheus/client_golang"

#       cloud.google.com/go/compute/metadata v0.2.3
# [1] git ls-remote https://github.com/googleapis/google-cloud-go cf8081fada0955a1682ce3fc400b44bc141309c7
SRCREV_metadata="cf8081fada0955a1682ce3fc400b44bc141309c7"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=metadata;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/cloud.google.com/go/compute/metadata"

#       github.com/SherClockHolmes/webpush-go v1.2.0
# [1] git ls-remote https://github.com/SherClockHolmes/webpush-go 9f057bcddd4d4ee494899af787cd67cfa868c80b
SRCREV_webpush-go="9f057bcddd4d4ee494899af787cd67cfa868c80b"
SRC_URI += "git://github.com/SherClockHolmes/webpush-go;name=webpush-go;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/SherClockHolmes/webpush-go"

#       google.golang.org/genproto/googleapis/api v0.0.0-20230815205213-6bfd019c3878
# [1] git ls-remote https://github.com/googleapis/go-genproto 6bfd019c38784710199100ff00bcac6ae21597d9
SRCREV_googleapis-api="6bfd019c38784710199100ff00bcac6ae21597d9"
SRC_URI += "git://github.com/googleapis/go-genproto;name=googleapis-api;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/genproto/googleapis/api"

#       google.golang.org/genproto/googleapis/rpc v0.0.0-20230815205213-6bfd019c3878
# [1] git ls-remote https://github.com/googleapis/go-genproto 6bfd019c38784710199100ff00bcac6ae21597d9
SRCREV_rpc="6bfd019c38784710199100ff00bcac6ae21597d9"
SRC_URI += "git://github.com/googleapis/go-genproto;name=rpc;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/google.golang.org/genproto/googleapis/rpc"

#       github.com/matttproud/golang_protobuf_extensions v1.0.4
# [1] git ls-remote https://github.com/matttproud/golang_protobuf_extensions c182affec369e30f25d3eb8cd8a478dee585ae7d
SRCREV_golang_protobuf_extensions="c182affec369e30f25d3eb8cd8a478dee585ae7d"
SRC_URI += "git://github.com/matttproud/golang_protobuf_extensions;name=golang_protobuf_extensions;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/matttproud/golang_protobuf_extensions"

#       github.com/googleapis/enterprise-certificate-proxy v0.2.5
# [1] git ls-remote https://github.com/googleapis/enterprise-certificate-proxy 5b63ef50a6264a9749823f4e41da6d4e7836e419
SRCREV_enterprise-certificate-proxy="5b63ef50a6264a9749823f4e41da6d4e7836e419"
SRC_URI += "git://github.com/googleapis/enterprise-certificate-proxy;name=enterprise-certificate-proxy;protocol=https;nobranch=1;destsuffix=${WORKDIR}/${BP}/src/import/vendor.fetch/github.com/googleapis/enterprise-certificate-proxy"

