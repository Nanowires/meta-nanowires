#       cel.dev/expr v0.25.1
# [1] git ls-remote https://github.com/google/cel-spec 7f3c4c513b42d471d0be9439bf5bde38f45f8404
SRCREV_expr = "7f3c4c513b42d471d0be9439bf5bde38f45f8404"
SRC_URI += "git://github.com/google/cel-spec;name=expr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/cel.dev/expr"

#       gopkg.in/yaml.v2 v2.4.0
# [1] git ls-remote https://github.com/go-yaml/yaml 7649d4548cb53a614db133b2a8ac1f31859dda8c
SRCREV_yaml.v2 = "7649d4548cb53a614db133b2a8ac1f31859dda8c"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/yaml.v2"

#       golang.org/x/net v0.47.0
# [1] git ls-remote https://go.googlesource.com/net 9a296438e54dff851a45667aa645a97003b44db5
SRCREV_net = "9a296438e54dff851a45667aa645a97003b44db5"
SRC_URI += "git://go.googlesource.com/net;name=net;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/net"

#       golang.org/x/sys v0.38.0
# [1] git ls-remote https://go.googlesource.com/sys 15129aafc3056028aa2694528ac20373f8cd34e4
SRCREV_sys = "15129aafc3056028aa2694528ac20373f8cd34e4"
SRC_URI += "git://go.googlesource.com/sys;name=sys;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sys"

#       gopkg.in/yaml.v3 v3.0.1
# [1] git ls-remote https://github.com/go-yaml/yaml f6f7691b1fdeb513f56608cd2c32c51f8194bf51
SRCREV_yaml.v3 = "f6f7691b1fdeb513f56608cd2c32c51f8194bf51"
SRC_URI += "git://github.com/go-yaml/yaml;name=yaml.v3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/gopkg.in/yaml.v3"

#       golang.org/x/sync v0.18.0
# [1] git ls-remote https://go.googlesource.com/sync 1966f539bbd7664efd5bb7462ae94d9db67f4502
SRCREV_sync = "1966f539bbd7664efd5bb7462ae94d9db67f4502"
SRC_URI += "git://go.googlesource.com/sync;name=sync;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/sync"

#       golang.org/x/term v0.37.0
# [1] git ls-remote https://go.googlesource.com/term 1231d5465be98a7c5f01140358c142d365d4fbb6
SRCREV_term = "1231d5465be98a7c5f01140358c142d365d4fbb6"
SRC_URI += "git://go.googlesource.com/term;name=term;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/term"

#       golang.org/x/time v0.14.0
# [1] git ls-remote https://go.googlesource.com/time 2b4e43900c03fd6b77109b7b2b6d77583f48bc1c
SRCREV_time = "2b4e43900c03fd6b77109b7b2b6d77583f48bc1c"
SRC_URI += "git://go.googlesource.com/time;name=time;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/time"

#       golang.org/x/text v0.31.0
# [1] git ls-remote https://go.googlesource.com/text e7ff6b3572e1a83c072ef150c985f86603986e1b
SRCREV_text = "e7ff6b3572e1a83c072ef150c985f86603986e1b"
SRC_URI += "git://go.googlesource.com/text;name=text;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/text"

#       go.yaml.in/yaml/v2 v2.4.3
# [1] git ls-remote https://github.com/yaml/go-yaml 3b57511c5e469cd030f5df7705d1f4208aa8b339
SRCREV_yaml-v2 = "3b57511c5e469cd030f5df7705d1f4208aa8b339"
SRC_URI += "git://github.com/yaml/go-yaml;name=yaml-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.yaml.in/yaml/v2"

#       golang.org/x/crypto v0.44.0
# [1] git ls-remote https://go.googlesource.com/crypto 122a78f140d9d3303ed3261bc374bbbca149140f
SRCREV_crypto = "122a78f140d9d3303ed3261bc374bbbca149140f"
SRC_URI += "git://go.googlesource.com/crypto;name=crypto;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/crypto"

#       golang.org/x/oauth2 v0.33.0
# [1] git ls-remote https://go.googlesource.com/oauth2 f28b0b5467dda26d56f1240381158f7c334654d1
SRCREV_oauth2 = "f28b0b5467dda26d56f1240381158f7c334654d1"
SRC_URI += "git://go.googlesource.com/oauth2;name=oauth2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/golang.org/x/oauth2"

#       cloud.google.com/go v0.123.0
# [1] git ls-remote https://github.com/googleapis/google-cloud-go 4e8373586a5e48c18fbfd4bb0a3e259184e49a91
SRCREV_go = "4e8373586a5e48c18fbfd4bb0a3e259184e49a91"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/cloud.google.com/go"

#       google.golang.org/api v0.256.0
# [1] git ls-remote https://github.com/googleapis/google-api-go-client 811ba14d5fc1b87bd0058d49b80293164db986fa
SRCREV_api = "811ba14d5fc1b87bd0058d49b80293164db986fa"
SRC_URI += "git://github.com/googleapis/google-api-go-client;name=api;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/api"

#       github.com/pkg/errors v0.9.1
# [1] git ls-remote https://github.com/pkg/errors 614d223910a179a466c1767a985424175c39b465
SRCREV_errors = "614d223910a179a466c1767a985424175c39b465"
SRC_URI += "git://github.com/pkg/errors;name=errors;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pkg/errors"

#       github.com/cncf/xds/go v0.0.0-20251110193048-8bfbf64dc13e
# [1] git ls-remote https://github.com/cncf/xds 8bfbf64dc13ee1a570be4fbdcfccbdd8532463f0
SRCREV_xds-go = "8bfbf64dc13ee1a570be4fbdcfccbdd8532463f0"
SRC_URI += "git://github.com/cncf/xds;name=xds-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cncf/xds/go"

#       github.com/google/uuid v1.6.0
# [1] git ls-remote https://github.com/google/uuid 0f11ee6918f41a04c201eceeadf612a377bc7fbc
SRCREV_uuid = "0f11ee6918f41a04c201eceeadf612a377bc7fbc"
SRC_URI += "git://github.com/google/uuid;name=uuid;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/uuid"

#       github.com/gorilla/css v1.0.1
# [1] git ls-remote https://github.com/gorilla/css b2cb20bc2adfcf4cbfde7730187411777ffa836a
SRCREV_css = "b2cb20bc2adfcf4cbfde7730187411777ffa836a"
SRC_URI += "git://github.com/gorilla/css;name=css;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gorilla/css"

#       google.golang.org/grpc v1.76.0
# [1] git ls-remote https://github.com/grpc/grpc-go d96c2ef4f3339142d20a47797d8a5a4fae948607
SRCREV_grpc = "d96c2ef4f3339142d20a47797d8a5a4fae948607"
SRC_URI += "git://github.com/grpc/grpc-go;name=grpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/grpc"

#       cloud.google.com/go/iam v1.5.3
# [1] git ls-remote https://github.com/googleapis/google-cloud-go bf00b9db931a52688d14eb44d4fdf4443338dc9a
SRCREV_iam = "bf00b9db931a52688d14eb44d4fdf4443338dc9a"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=iam;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/cloud.google.com/go/iam"

#       github.com/beorn7/perks v1.0.1
# [1] git ls-remote https://github.com/beorn7/perks 37c8de3658fcb183f997c4e13e8337516ab753e6
SRCREV_perks = "37c8de3658fcb183f997c4e13e8337516ab753e6"
SRC_URI += "git://github.com/beorn7/perks;name=perks;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/beorn7/perks"

#       github.com/go-logr/logr v1.4.3
# [1] git ls-remote https://github.com/go-logr/logr 38a1c47ef633fa6b2eee6b8f2e1371ba8626e557
SRCREV_logr = "38a1c47ef633fa6b2eee6b8f2e1371ba8626e557"
SRC_URI += "git://github.com/go-logr/logr;name=logr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-logr/logr"

#       github.com/go-logr/stdr v1.2.2
# [1] git ls-remote https://github.com/go-logr/stdr 521af2addfa7c81c8a65d0e85ed34bb6bb6dc262
SRCREV_stdr = "521af2addfa7c81c8a65d0e85ed34bb6bb6dc262"
SRC_URI += "git://github.com/go-logr/stdr;name=stdr;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-logr/stdr"

#       github.com/olebedev/when v1.1.0
# [1] git ls-remote https://github.com/olebedev/when 987a8eed4b47550d4a297b27bc984f589685dd70
SRCREV_when = "987a8eed4b47550d4a297b27bc984f589685dd70"
SRC_URI += "git://github.com/olebedev/when;name=when;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/olebedev/when"

#       github.com/urfave/cli/v2 v2.27.7
# [1] git ls-remote https://github.com/urfave/cli 19b951ab78929023a9a670722b26ffb1d67c733a
SRCREV_cli-v2 = "19b951ab78929023a9a670722b26ffb1d67c733a"
SRC_URI += "git://github.com/urfave/cli;name=cli-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/urfave/cli/v2"

#       cloud.google.com/go/auth v0.17.0
# [1] git ls-remote https://github.com/googleapis/google-cloud-go 3531b3c7b2089a044e777eaf4d92da2e0a1c7d12
SRCREV_auth = "3531b3c7b2089a044e777eaf4d92da2e0a1c7d12"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=auth;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/cloud.google.com/go/auth"

#       github.com/google/s2a-go v0.1.9
# [1] git ls-remote https://github.com/google/s2a-go b293be1aa7a6e6e4565f9967c093dd412253b267
SRCREV_s2a-go = "b293be1aa7a6e6e4565f9967c093dd412253b267"
SRC_URI += "git://github.com/google/s2a-go;name=s2a-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/google/s2a-go"

#       github.com/stretchr/objx v0.5.2
# [1] git ls-remote https://github.com/stretchr/objx 307d0db21292676ac9d469826525c3630f47f63a
SRCREV_objx = "307d0db21292676ac9d469826525c3630f47f63a"
SRC_URI += "git://github.com/stretchr/objx;name=objx;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/stretchr/objx"

#       go.opentelemetry.io/otel v1.38.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 84e3f3ac8b25204f3a0f77a805437a5e08573b35
SRCREV_otel = "84e3f3ac8b25204f3a0f77a805437a5e08573b35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otel;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel"

#       firebase.google.com/go/v4 v4.18.0
# [1] git ls-remote https://github.com/firebase/firebase-admin-go 26dec0b7589ef7641eefd6681981024079b8524c
SRCREV_v4 = "26dec0b7589ef7641eefd6681981024079b8524c"
SRC_URI += "git://github.com/firebase/firebase-admin-go;name=v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/firebase.google.com/go/v4"

#       github.com/AlekSi/pointer v1.2.0
# [1] git ls-remote https://github.com/AlekSi/pointer 039be97b958cc3cbeb2329617d2e493bd2331fac
SRCREV_pointer = "039be97b958cc3cbeb2329617d2e493bd2331fac"
SRC_URI += "git://github.com/AlekSi/pointer;name=pointer;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/AlekSi/pointer"

#       github.com/xrash/smetrics v0.0.0-20250705151800-55b8f293f342
# [1] git ls-remote https://github.com/xrash/smetrics 55b8f293f34240a78d581f12dd61738357eb6c34
SRCREV_smetrics = "55b8f293f34240a78d581f12dd61738357eb6c34"
SRC_URI += "git://github.com/xrash/smetrics;name=smetrics;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/xrash/smetrics"

#       github.com/BurntSushi/toml v1.5.0
# [1] git ls-remote https://github.com/BurntSushi/toml d97def528e83313822a9f98946334ffccd542bdf
SRCREV_toml = "d97def528e83313822a9f98946334ffccd542bdf"
SRC_URI += "git://github.com/BurntSushi/toml;name=toml;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/BurntSushi/toml"

#       github.com/davecgh/go-spew v1.1.2-0.20180830191138-d8f796af33cc
# [1] git ls-remote https://github.com/davecgh/go-spew d8f796af33cc11cb798c1aaeb27a4ebc5099927d
SRCREV_go-spew = "d8f796af33cc11cb798c1aaeb27a4ebc5099927d"
SRC_URI += "git://github.com/davecgh/go-spew;name=go-spew;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/davecgh/go-spew"

#       github.com/golang/protobuf v1.5.4
# [1] git ls-remote https://github.com/golang/protobuf 75de7c059e36b64f01d0dd234ff2fff404ec3374
SRCREV_protobuf = "75de7c059e36b64f01d0dd234ff2fff404ec3374"
SRC_URI += "git://github.com/golang/protobuf;name=protobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/golang/protobuf"

#       google.golang.org/genproto v0.0.0-20251111163417-95abcf5c77ba
# [1] git ls-remote https://github.com/googleapis/go-genproto 95abcf5c77bad2b55bdb5f7aa8719e45a50f42e8
SRCREV_genproto = "95abcf5c77bad2b55bdb5f7aa8719e45a50f42e8"
SRC_URI += "git://github.com/googleapis/go-genproto;name=genproto;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/genproto"

#       google.golang.org/protobuf v1.36.10
# [1] git ls-remote https://github.com/protocolbuffers/protobuf-go f9fa50e26c0ffec610c509850484a5fdecdb26ec
SRCREV_google.golang.org-protobuf = "f9fa50e26c0ffec610c509850484a5fdecdb26ec"
SRC_URI += "git://github.com/protocolbuffers/protobuf-go;name=google.golang.org-protobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/protobuf"

#       cloud.google.com/go/storage v1.57.2
# [1] git ls-remote https://github.com/googleapis/google-cloud-go 54f5f63c734f368cdb11fcf1841a2dbc05d3a982
SRCREV_storage = "54f5f63c734f368cdb11fcf1841a2dbc05d3a982"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=storage;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/cloud.google.com/go/storage"

#       github.com/emersion/go-smtp v0.17.0
# [1] git ls-remote https://github.com/emersion/go-smtp b4236a6d6ff4a5cd166ce0cec02b92c66f6dd3d0
SRCREV_go-smtp = "b4236a6d6ff4a5cd166ce0cec02b92c66f6dd3d0"
SRC_URI += "git://github.com/emersion/go-smtp;name=go-smtp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/emersion/go-smtp"

#       github.com/mattn/go-sqlite3 v1.14.32
# [1] git ls-remote https://github.com/mattn/go-sqlite3 8bf7a8a844faf952aa0245b4c0ad0a47e84f4efd
SRCREV_go-sqlite3 = "8bf7a8a844faf952aa0245b4c0ad0a47e84f4efd"
SRC_URI += "git://github.com/mattn/go-sqlite3;name=go-sqlite3;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/mattn/go-sqlite3"

#       github.com/stretchr/testify v1.11.1
# [1] git ls-remote https://github.com/stretchr/testify 2a57335dc9cd6833daa820bc94d9b40c26a7917d
SRCREV_testify = "2a57335dc9cd6833daa820bc94d9b40c26a7917d"
SRC_URI += "git://github.com/stretchr/testify;name=testify;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/stretchr/testify"

#       github.com/aymerick/douceur v0.2.0
# [1] git ls-remote https://github.com/aymerick/douceur c5c95ec357c8235fbd7f34e8c843d36783f3fad9
SRCREV_douceur = "c5c95ec357c8235fbd7f34e8c843d36783f3fad9"
SRC_URI += "git://github.com/aymerick/douceur;name=douceur;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/aymerick/douceur"

#       github.com/emersion/go-sasl v0.0.0-20241020182733-b788ff22d5a6
# [1] git ls-remote https://github.com/emersion/go-sasl b788ff22d5a6b3970cde181998f52658a475bffc
SRCREV_go-sasl = "b788ff22d5a6b3970cde181998f52658a475bffc"
SRC_URI += "git://github.com/emersion/go-sasl;name=go-sasl;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/emersion/go-sasl"

#       github.com/gorilla/websocket v1.5.3
# [1] git ls-remote https://github.com/gorilla/websocket ce903f6d1d961af3a8602f2842c8b1c3fca58c4d
SRCREV_websocket = "ce903f6d1d961af3a8602f2842c8b1c3fca58c4d"
SRC_URI += "git://github.com/gorilla/websocket;name=websocket;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gorilla/websocket"

#       github.com/cespare/xxhash/v2 v2.3.0
# [1] git ls-remote https://github.com/cespare/xxhash 998dce232f17418a7a5721ecf87ca714025a3243
SRCREV_xxhash-v2 = "998dce232f17418a7a5721ecf87ca714025a3243"
SRC_URI += "git://github.com/cespare/xxhash;name=xxhash-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cespare/xxhash/v2"

#       github.com/felixge/httpsnoop v1.0.4
# [1] git ls-remote https://github.com/felixge/httpsnoop c5817c27ec125409c069052fdd171023c353501c
SRCREV_httpsnoop = "c5817c27ec125409c069052fdd171023c353501c"
SRC_URI += "git://github.com/felixge/httpsnoop;name=httpsnoop;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/felixge/httpsnoop"

#       github.com/golang-jwt/jwt/v4 v4.5.2
# [1] git ls-remote https://github.com/golang-jwt/jwt 2f0e9add62078527821828c76865661aa7718a84
SRCREV_jwt-v4 = "2f0e9add62078527821828c76865661aa7718a84"
SRC_URI += "git://github.com/golang-jwt/jwt;name=jwt-v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/golang-jwt/jwt/v4"

#       github.com/golang-jwt/jwt/v5 v5.3.0
# [1] git ls-remote https://github.com/golang-jwt/jwt e9547a11aa603c52a31e315cdcaa71d0f25b921a
SRCREV_v5 = "e9547a11aa603c52a31e315cdcaa71d0f25b921a"
SRC_URI += "git://github.com/golang-jwt/jwt;name=v5;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/golang-jwt/jwt/v5"

#       github.com/munnerz/goautoneg v0.0.0-20191010083416-a7dc8b61c822
# [1] git ls-remote https://github.com/munnerz/goautoneg a7dc8b61c822528f973a5e4e7b272055c6fdb43e
SRCREV_goautoneg = "a7dc8b61c822528f973a5e4e7b272055c6fdb43e"
SRC_URI += "git://github.com/munnerz/goautoneg;name=goautoneg;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/munnerz/goautoneg"

#       github.com/prometheus/common v0.67.2
# [1] git ls-remote https://github.com/prometheus/common 594f4d4a984eb5f1ca8f0983f8b1790e77a5a725
SRCREV_common = "594f4d4a984eb5f1ca8f0983f8b1790e77a5a725"
SRC_URI += "git://github.com/prometheus/common;name=common;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/prometheus/common"

#       github.com/prometheus/procfs v0.19.2
# [1] git ls-remote https://github.com/prometheus/procfs 9b0219be351fb17d7ebad273464367af1fabf41a
SRCREV_procfs = "9b0219be351fb17d7ebad273464367af1fabf41a"
SRC_URI += "git://github.com/prometheus/procfs;name=procfs;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/prometheus/procfs"

#       go.opentelemetry.io/auto/sdk v1.2.1
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-instrumentation 715f58ce2f17e2176b8e53b871e47531a259cc1d
SRCREV_sdk = "715f58ce2f17e2176b8e53b871e47531a259cc1d"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-instrumentation;name=sdk;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/auto/sdk"

#       go.opentelemetry.io/otel/sdk v1.38.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 84e3f3ac8b25204f3a0f77a805437a5e08573b35
SRCREV_otel-sdk = "84e3f3ac8b25204f3a0f77a805437a5e08573b35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otel-sdk;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/sdk"

#       cloud.google.com/go/firestore v1.20.0
# [1] git ls-remote https://github.com/googleapis/google-cloud-go 2be96d6d4ac99926d8c9396b038d83b2fadc3e3f
SRCREV_firestore = "2be96d6d4ac99926d8c9396b038d83b2fadc3e3f"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=firestore;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/cloud.google.com/go/firestore"

#       github.com/MicahParks/keyfunc v1.9.0
# [1] git ls-remote https://github.com/MicahParks/keyfunc f76c64fa36d9b7e4a96547313dcb651d54aa006b
SRCREV_keyfunc = "f76c64fa36d9b7e4a96547313dcb651d54aa006b"
SRC_URI += "git://github.com/MicahParks/keyfunc;name=keyfunc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/MicahParks/keyfunc"

#       github.com/go-jose/go-jose/v4 v4.1.3
# [1] git ls-remote https://github.com/go-jose/go-jose 5348b9a4ba4559d2266b5af89fb5353cd1a5360a
SRCREV_go-jose-v4 = "5348b9a4ba4559d2266b5af89fb5353cd1a5360a"
SRC_URI += "git://github.com/go-jose/go-jose;name=go-jose-v4;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/go-jose/go-jose/v4"

#       github.com/pmezard/go-difflib v1.0.1-0.20181226105442-5d4384ee4fb2
# [1] git ls-remote https://github.com/pmezard/go-difflib 5d4384ee4fb2527b0a1256a821ebfc92f91efefc
SRCREV_go-difflib = "5d4384ee4fb2527b0a1256a821ebfc92f91efefc"
SRC_URI += "git://github.com/pmezard/go-difflib;name=go-difflib;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/pmezard/go-difflib"

#       cloud.google.com/go/monitoring v1.24.3
# [1] git ls-remote https://github.com/googleapis/google-cloud-go bf00b9db931a52688d14eb44d4fdf4443338dc9a
SRCREV_monitoring = "bf00b9db931a52688d14eb44d4fdf4443338dc9a"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=monitoring;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/cloud.google.com/go/monitoring"

#       github.com/spiffe/go-spiffe/v2 v2.6.0
# [1] git ls-remote https://github.com/spiffe/go-spiffe c6d0af3a4780fcc69132bb8bc5d2bdfcbe5ea42b
SRCREV_go-spiffe-v2 = "c6d0af3a4780fcc69132bb8bc5d2bdfcbe5ea42b"
SRC_URI += "git://github.com/spiffe/go-spiffe;name=go-spiffe-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/spiffe/go-spiffe/v2"

#       go.opentelemetry.io/otel/trace v1.38.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 84e3f3ac8b25204f3a0f77a805437a5e08573b35
SRCREV_trace = "84e3f3ac8b25204f3a0f77a805437a5e08573b35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=trace;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/trace"

#       google.golang.org/appengine/v2 v2.0.6
# [1] git ls-remote https://github.com/golang/appengine 3ab9c40c53fc8b2b053d3fe76ccd03fdc3178ab6
SRCREV_appengine-v2 = "3ab9c40c53fc8b2b053d3fe76ccd03fdc3178ab6"
SRC_URI += "git://github.com/golang/appengine;name=appengine-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/appengine/v2"

#       github.com/stripe/stripe-go/v74 v74.30.0
# [1] git ls-remote https://github.com/stripe/stripe-go fc96e232f3a79a5203f3e94563209409205a06b5
SRCREV_v74 = "fc96e232f3a79a5203f3e94563209409205a06b5"
SRC_URI += "git://github.com/stripe/stripe-go;name=v74;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/stripe/stripe-go/v74"

#       cloud.google.com/go/longrunning v0.7.0
# [1] git ls-remote https://github.com/googleapis/google-cloud-go cf5ab4e01480f8ddd2dd66923fc9b93677c79377
SRCREV_longrunning = "cf5ab4e01480f8ddd2dd66923fc9b93677c79377"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=longrunning;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/cloud.google.com/go/longrunning"

#       github.com/googleapis/gax-go/v2 v2.15.0
# [1] git ls-remote https://github.com/googleapis/gax-go cb080069bb4bc31f6598655e94555d9f495f8c1e
SRCREV_gax-go-v2 = "cb080069bb4bc31f6598655e94555d9f495f8c1e"
SRC_URI += "git://github.com/googleapis/gax-go;name=gax-go-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/googleapis/gax-go/v2"

#       go.opentelemetry.io/otel/metric v1.38.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 84e3f3ac8b25204f3a0f77a805437a5e08573b35
SRCREV_otel-metric = "84e3f3ac8b25204f3a0f77a805437a5e08573b35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=otel-metric;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/metric"

#       github.com/cpuguy83/go-md2man/v2 v2.0.7
# [1] git ls-remote https://github.com/cpuguy83/go-md2man 061b6c7cbecd6752049221aa15b7a05160796698
SRCREV_v2 = "061b6c7cbecd6752049221aa15b7a05160796698"
SRC_URI += "git://github.com/cpuguy83/go-md2man;name=v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/cpuguy83/go-md2man/v2"

#       github.com/planetscale/vtprotobuf v0.6.1-0.20240319094008-0393e58bdf10
# [1] git ls-remote https://github.com/planetscale/vtprotobuf 0393e58bdf106fe0347e554d272a8f2c84d12461
SRCREV_vtprotobuf = "0393e58bdf106fe0347e554d272a8f2c84d12461"
SRC_URI += "git://github.com/planetscale/vtprotobuf;name=vtprotobuf;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/planetscale/vtprotobuf"

#       github.com/gabriel-vasile/mimetype v1.4.11
# [1] git ls-remote https://github.com/gabriel-vasile/mimetype 99148300a8a57c40a23ee4ef34166a35e68fc7ac
SRCREV_mimetype = "99148300a8a57c40a23ee4ef34166a35e68fc7ac"
SRC_URI += "git://github.com/gabriel-vasile/mimetype;name=mimetype;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/gabriel-vasile/mimetype"

#       github.com/microcosm-cc/bluemonday v1.0.27
# [1] git ls-remote https://github.com/microcosm-cc/bluemonday 10b8ac69db438c65c6d5469bb3c345aaa81f18d9
SRCREV_bluemonday = "10b8ac69db438c65c6d5469bb3c345aaa81f18d9"
SRC_URI += "git://github.com/microcosm-cc/bluemonday;name=bluemonday;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/microcosm-cc/bluemonday"

#       github.com/prometheus/client_model v0.6.2
# [1] git ls-remote https://github.com/prometheus/client_model eb136e513d419e0c31ad750922f0a6f7675c2dee
SRCREV_client_model = "eb136e513d419e0c31ad750922f0a6f7675c2dee"
SRC_URI += "git://github.com/prometheus/client_model;name=client_model;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/prometheus/client_model"

#       github.com/russross/blackfriday/v2 v2.1.0
# [1] git ls-remote https://github.com/russross/blackfriday 4c9bf9512682b995722660a4196c0013228e2049
SRCREV_blackfriday-v2 = "4c9bf9512682b995722660a4196c0013228e2049"
SRC_URI += "git://github.com/russross/blackfriday;name=blackfriday-v2;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/russross/blackfriday/v2"

#       github.com/prometheus/client_golang v1.23.2
# [1] git ls-remote https://github.com/prometheus/client_golang 8179a560819f2c64ef6ade70e6ae4c73aecaca3c
SRCREV_client_golang = "8179a560819f2c64ef6ade70e6ae4c73aecaca3c"
SRC_URI += "git://github.com/prometheus/client_golang;name=client_golang;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/prometheus/client_golang"

#       go.opentelemetry.io/otel/sdk/metric v1.38.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go 84e3f3ac8b25204f3a0f77a805437a5e08573b35
SRCREV_sdk-metric = "84e3f3ac8b25204f3a0f77a805437a5e08573b35"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go;name=sdk-metric;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/otel/sdk/metric"

#       cloud.google.com/go/auth/oauth2adapt v0.2.8
# [1] git ls-remote https://github.com/googleapis/google-cloud-go 7e600b964c1cae3ba47fc7d1d340a536723d18cb
SRCREV_oauth2adapt = "7e600b964c1cae3ba47fc7d1d340a536723d18cb"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=oauth2adapt;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/cloud.google.com/go/auth/oauth2adapt"

#       cloud.google.com/go/compute/metadata v0.9.0
# [1] git ls-remote https://github.com/googleapis/google-cloud-go 7b2365446764b0bba37198a55644954b437bddd0
SRCREV_metadata = "7b2365446764b0bba37198a55644954b437bddd0"
SRC_URI += "git://github.com/googleapis/google-cloud-go;name=metadata;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/cloud.google.com/go/compute/metadata"

#       github.com/SherClockHolmes/webpush-go v1.4.0
# [1] git ls-remote https://github.com/SherClockHolmes/webpush-go f5c3e9f7b642a8dd66cb844050520526f721971d
SRCREV_webpush-go = "f5c3e9f7b642a8dd66cb844050520526f721971d"
SRC_URI += "git://github.com/SherClockHolmes/webpush-go;name=webpush-go;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/SherClockHolmes/webpush-go"

#       github.com/envoyproxy/protoc-gen-validate v1.2.1
# [1] git ls-remote https://github.com/bufbuild/protoc-gen-validate 7b06248484ceeaa947e93ca2747eccf336a88ecc
SRCREV_protoc-gen-validate = "7b06248484ceeaa947e93ca2747eccf336a88ecc"
SRC_URI += "git://github.com/bufbuild/protoc-gen-validate;name=protoc-gen-validate;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/envoyproxy/protoc-gen-validate"

#       go.opentelemetry.io/contrib/detectors/gcp v1.38.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib 80c9316336ebb4f4c67d8e1011a3add889213fb7
SRCREV_detectors-gcp = "80c9316336ebb4f4c67d8e1011a3add889213fb7"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=detectors-gcp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/contrib/detectors/gcp"

#       google.golang.org/genproto/googleapis/api v0.0.0-20251111163417-95abcf5c77ba
# [1] git ls-remote https://github.com/googleapis/go-genproto 95abcf5c77bad2b55bdb5f7aa8719e45a50f42e8
SRCREV_googleapis-api = "95abcf5c77bad2b55bdb5f7aa8719e45a50f42e8"
SRC_URI += "git://github.com/googleapis/go-genproto;name=googleapis-api;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/genproto/googleapis/api"

#       google.golang.org/genproto/googleapis/rpc v0.0.0-20251111163417-95abcf5c77ba
# [1] git ls-remote https://github.com/googleapis/go-genproto 95abcf5c77bad2b55bdb5f7aa8719e45a50f42e8
SRCREV_rpc = "95abcf5c77bad2b55bdb5f7aa8719e45a50f42e8"
SRC_URI += "git://github.com/googleapis/go-genproto;name=rpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/google.golang.org/genproto/googleapis/rpc"

#       github.com/envoyproxy/go-control-plane/envoy v1.36.0
# [1] git ls-remote https://github.com/envoyproxy/go-control-plane 58535202ab441f4a081410fb8eac61cc35562b32
SRCREV_envoy = "58535202ab441f4a081410fb8eac61cc35562b32"
SRC_URI += "git://github.com/envoyproxy/go-control-plane;name=envoy;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/envoyproxy/go-control-plane/envoy"

#       github.com/googleapis/enterprise-certificate-proxy v0.3.7
# [1] git ls-remote https://github.com/googleapis/enterprise-certificate-proxy 992974880a1f89b07d4fa111e37e66c8a646648e
SRCREV_enterprise-certificate-proxy = "992974880a1f89b07d4fa111e37e66c8a646648e"
SRC_URI += "git://github.com/googleapis/enterprise-certificate-proxy;name=enterprise-certificate-proxy;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/googleapis/enterprise-certificate-proxy"

#       go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp v0.63.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib 80c9316336ebb4f4c67d8e1011a3add889213fb7
SRCREV_otelhttp = "80c9316336ebb4f4c67d8e1011a3add889213fb7"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelhttp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/net/http/otelhttp"

#       github.com/GoogleCloudPlatform/opentelemetry-operations-go/detectors/gcp v1.30.0
# [1] git ls-remote https://github.com/GoogleCloudPlatform/opentelemetry-operations-go 7130d1aded77c51f613a9d949f166d119cd595e9
SRCREV_gcp = "7130d1aded77c51f613a9d949f166d119cd595e9"
SRC_URI += "git://github.com/GoogleCloudPlatform/opentelemetry-operations-go;name=gcp;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/GoogleCloudPlatform/opentelemetry-operations-go/detectors/gcp"

#       github.com/GoogleCloudPlatform/opentelemetry-operations-go/exporter/metric v0.54.0
# [1] git ls-remote https://github.com/GoogleCloudPlatform/opentelemetry-operations-go 7130d1aded77c51f613a9d949f166d119cd595e9
SRCREV_metric = "7130d1aded77c51f613a9d949f166d119cd595e9"
SRC_URI += "git://github.com/GoogleCloudPlatform/opentelemetry-operations-go;name=metric;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/GoogleCloudPlatform/opentelemetry-operations-go/exporter/metric"

#       go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc v0.63.0
# [1] git ls-remote https://github.com/open-telemetry/opentelemetry-go-contrib 80c9316336ebb4f4c67d8e1011a3add889213fb7
SRCREV_otelgrpc = "80c9316336ebb4f4c67d8e1011a3add889213fb7"
SRC_URI += "git://github.com/open-telemetry/opentelemetry-go-contrib;name=otelgrpc;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/go.opentelemetry.io/contrib/instrumentation/google.golang.org/grpc/otelgrpc"

#       github.com/GoogleCloudPlatform/opentelemetry-operations-go/internal/resourcemapping v0.54.0
# [1] git ls-remote https://github.com/GoogleCloudPlatform/opentelemetry-operations-go 7130d1aded77c51f613a9d949f166d119cd595e9
SRCREV_resourcemapping = "7130d1aded77c51f613a9d949f166d119cd595e9"
SRC_URI += "git://github.com/GoogleCloudPlatform/opentelemetry-operations-go;name=resourcemapping;protocol=https;nobranch=1;destsuffix=${GO_SRCURI_DESTSUFFIX}/vendor.fetch/github.com/GoogleCloudPlatform/opentelemetry-operations-go/internal/resourcemapping"
