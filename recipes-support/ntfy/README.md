# ntfy: Notification service

NOTE: I'm by far no yocto expert and especially in the field of GO.

Ntfy is using GO for building it's server and client applications.
As GO usually fetches the dependencies during the build time, but
yocto aims at delivering a stable and reliable build environment,
we have a mismatch here.
So I took the example of k3s:
<https://git.yoctoproject.org/meta-virtualization/tree/recipes-containers/k3s?h=scarthgap>
and the help of the autogen script:
<https://git.yoctoproject.org/meta-virtualization/tree/scripts/README-oe-go-mod-autogen.txt?h=scarthgap>
for creating the recipe for building the server application.

(./oe-go-mod-autogen.py --workdir /tmp/ntfy --repo https://github.com/binwiederhier/ntfy --rev v2.16.0)

The created *.inc files need to be updated, to be comliant to the newest yocto release (spaces around '=', use ${GO_SRCURI_DESTSUFFIX} in destsuffix).

Some tweaks needed after running the autogen script:
Change the following lines in relocation.inc:

- github.com/googleapis/gax-go/v2:github.com/googleapis/gax-go/v2:force  
to  
github.com/googleapis/gax-go:github.com/googleapis/gax-go/v2:force

Also the modules.txt needs to be created manually by running "go mod vendor" in the source dir

Ntfy has also the option to build a web application, for sending
and receiving notifications.
This in turn is build with npm.
I didn't have the need of the application and the motivation so far,
to resolve the dependencies of this build.
So this work is left over for the future or some other volunteer ;-)

