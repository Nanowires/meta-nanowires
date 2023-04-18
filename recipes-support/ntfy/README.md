# ntfy: Notification service

NOTE: I'm by far no yocto expert and especially in tthe field of GO.

Ntfy is using GO for building it's server and client applications.
As GO usually fetches the dependencies during the build time, but
yocto aims at delivering a stable and reliable build environment,
we have a mismatch here.
So I took the example of k3s 
(https://git.yoctoproject.org/meta-virtualization/tree/recipes-containers/k3s?h=master)
for creating the recipe for building the server application.

Ntfy has also the ooptin to build a web application, for sending
and receiving notifications.
This in turn is build with npm.
I didn't have the need of the application and the motivation so far,
to resolve the dependencies of this build.
So this work is left over for the future or some other volunteer ;-)
