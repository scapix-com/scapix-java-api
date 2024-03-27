// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SYSTEM_OS_FWD
#define SCAPIX_JAVA_API_ANDROID_SYSTEM_OS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::system { class Os; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::system::Os>
{
	static constexpr fixed_string class_name = "android/system/Os";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SYSTEM_OS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SYSTEM_OS)
#define SCAPIX_JAVA_API_ANDROID_SYSTEM_OS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/system/Int64Ref.h>
#include <scapix/java_api/android/system/StructPollfd.h>
#include <scapix/java_api/android/system/StructStat.h>
#include <scapix/java_api/android/system/StructStatVfs.h>
#include <scapix/java_api/android/system/StructTimeval.h>
#include <scapix/java_api/android/system/StructUtsname.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/InetSocketAddress.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::system::Os : public jni::object_base<"android/system/Os",
	java::lang::Object>
{
public:

	static jni::ref<java::io::FileDescriptor> accept(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::net::InetSocketAddress> peerAddress) { return call_static_method<"accept", jni::ref<java::io::FileDescriptor>>(fd, peerAddress); }
	static jboolean access(jni::ref<java::lang::String> path, jint mode) { return call_static_method<"access", jboolean>(path, mode); }
	static void bind(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::net::InetAddress> address, jint port) { return call_static_method<"bind", void>(fd, address, port); }
	static void bind(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::net::SocketAddress> address) { return call_static_method<"bind", void>(fd, address); }
	static void chmod(jni::ref<java::lang::String> path, jint mode) { return call_static_method<"chmod", void>(path, mode); }
	static void chown(jni::ref<java::lang::String> path, jint uid, jint gid) { return call_static_method<"chown", void>(path, uid, gid); }
	static void close(jni::ref<java::io::FileDescriptor> fd) { return call_static_method<"close", void>(fd); }
	static void connect(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::net::InetAddress> address, jint port) { return call_static_method<"connect", void>(fd, address, port); }
	static void connect(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::net::SocketAddress> address) { return call_static_method<"connect", void>(fd, address); }
	static jni::ref<java::io::FileDescriptor> dup(jni::ref<java::io::FileDescriptor> oldFd) { return call_static_method<"dup", jni::ref<java::io::FileDescriptor>>(oldFd); }
	static jni::ref<java::io::FileDescriptor> dup2(jni::ref<java::io::FileDescriptor> oldFd, jint newFd) { return call_static_method<"dup2", jni::ref<java::io::FileDescriptor>>(oldFd, newFd); }
	static jni::ref<jni::array<java::lang::String>> environ() { return call_static_method<"environ", jni::ref<jni::array<java::lang::String>>>(); }
	static void execv(jni::ref<java::lang::String> filename, jni::ref<jni::array<java::lang::String>> argv) { return call_static_method<"execv", void>(filename, argv); }
	static void execve(jni::ref<java::lang::String> filename, jni::ref<jni::array<java::lang::String>> argv, jni::ref<jni::array<java::lang::String>> envp) { return call_static_method<"execve", void>(filename, argv, envp); }
	static void fchmod(jni::ref<java::io::FileDescriptor> fd, jint mode) { return call_static_method<"fchmod", void>(fd, mode); }
	static void fchown(jni::ref<java::io::FileDescriptor> fd, jint uid, jint gid) { return call_static_method<"fchown", void>(fd, uid, gid); }
	static jint fcntlInt(jni::ref<java::io::FileDescriptor> fd, jint cmd, jint arg) { return call_static_method<"fcntlInt", jint>(fd, cmd, arg); }
	static void fdatasync(jni::ref<java::io::FileDescriptor> fd) { return call_static_method<"fdatasync", void>(fd); }
	static jni::ref<android::system::StructStat> fstat(jni::ref<java::io::FileDescriptor> fd) { return call_static_method<"fstat", jni::ref<android::system::StructStat>>(fd); }
	static jni::ref<android::system::StructStatVfs> fstatvfs(jni::ref<java::io::FileDescriptor> fd) { return call_static_method<"fstatvfs", jni::ref<android::system::StructStatVfs>>(fd); }
	static void fsync(jni::ref<java::io::FileDescriptor> fd) { return call_static_method<"fsync", void>(fd); }
	static void ftruncate(jni::ref<java::io::FileDescriptor> fd, jlong length) { return call_static_method<"ftruncate", void>(fd, length); }
	static jni::ref<java::lang::String> gai_strerror(jint error) { return call_static_method<"gai_strerror", jni::ref<java::lang::String>>(error); }
	static jint getegid() { return call_static_method<"getegid", jint>(); }
	static jint geteuid() { return call_static_method<"geteuid", jint>(); }
	static jint getgid() { return call_static_method<"getgid", jint>(); }
	static jni::ref<java::lang::String> getenv(jni::ref<java::lang::String> name) { return call_static_method<"getenv", jni::ref<java::lang::String>>(name); }
	static jni::ref<java::net::SocketAddress> getpeername(jni::ref<java::io::FileDescriptor> fd) { return call_static_method<"getpeername", jni::ref<java::net::SocketAddress>>(fd); }
	static jint getpid() { return call_static_method<"getpid", jint>(); }
	static jint getppid() { return call_static_method<"getppid", jint>(); }
	static jni::ref<java::net::SocketAddress> getsockname(jni::ref<java::io::FileDescriptor> fd) { return call_static_method<"getsockname", jni::ref<java::net::SocketAddress>>(fd); }
	static jni::ref<android::system::StructTimeval> getsockoptTimeval(jni::ref<java::io::FileDescriptor> fd, jint level, jint option) { return call_static_method<"getsockoptTimeval", jni::ref<android::system::StructTimeval>>(fd, level, option); }
	static jint gettid() { return call_static_method<"gettid", jint>(); }
	static jint getuid() { return call_static_method<"getuid", jint>(); }
	static jni::ref<jni::array<jbyte>> getxattr(jni::ref<java::lang::String> path, jni::ref<java::lang::String> name) { return call_static_method<"getxattr", jni::ref<jni::array<jbyte>>>(path, name); }
	static jni::ref<java::lang::String> if_indextoname(jint index) { return call_static_method<"if_indextoname", jni::ref<java::lang::String>>(index); }
	static jint if_nametoindex(jni::ref<java::lang::String> name) { return call_static_method<"if_nametoindex", jint>(name); }
	static jni::ref<java::net::InetAddress> inet_pton(jint family, jni::ref<java::lang::String> address) { return call_static_method<"inet_pton", jni::ref<java::net::InetAddress>>(family, address); }
	static jboolean isatty(jni::ref<java::io::FileDescriptor> fd) { return call_static_method<"isatty", jboolean>(fd); }
	static void kill(jint pid, jint signal) { return call_static_method<"kill", void>(pid, signal); }
	static void lchown(jni::ref<java::lang::String> path, jint uid, jint gid) { return call_static_method<"lchown", void>(path, uid, gid); }
	static void link(jni::ref<java::lang::String> oldPath, jni::ref<java::lang::String> newPath) { return call_static_method<"link", void>(oldPath, newPath); }
	static void listen(jni::ref<java::io::FileDescriptor> fd, jint backlog) { return call_static_method<"listen", void>(fd, backlog); }
	static jni::ref<jni::array<java::lang::String>> listxattr(jni::ref<java::lang::String> path) { return call_static_method<"listxattr", jni::ref<jni::array<java::lang::String>>>(path); }
	static jlong lseek(jni::ref<java::io::FileDescriptor> fd, jlong offset, jint p3) { return call_static_method<"lseek", jlong>(fd, offset, p3); }
	static jni::ref<android::system::StructStat> lstat(jni::ref<java::lang::String> path) { return call_static_method<"lstat", jni::ref<android::system::StructStat>>(path); }
	static jni::ref<java::io::FileDescriptor> memfd_create(jni::ref<java::lang::String> name, jint flags) { return call_static_method<"memfd_create", jni::ref<java::io::FileDescriptor>>(name, flags); }
	static void mincore(jlong address, jlong p2, jni::ref<jni::array<jbyte>> byteCount) { return call_static_method<"mincore", void>(address, p2, byteCount); }
	static void mkdir(jni::ref<java::lang::String> path, jint mode) { return call_static_method<"mkdir", void>(path, mode); }
	static void mkfifo(jni::ref<java::lang::String> path, jint mode) { return call_static_method<"mkfifo", void>(path, mode); }
	static void mlock(jlong address, jlong p2) { return call_static_method<"mlock", void>(address, p2); }
	static jlong mmap(jlong address, jlong p2, jint byteCount, jint p4, jni::ref<java::io::FileDescriptor> prot, jlong flags) { return call_static_method<"mmap", jlong>(address, p2, byteCount, p4, prot, flags); }
	static void msync(jlong address, jlong p2, jint byteCount) { return call_static_method<"msync", void>(address, p2, byteCount); }
	static void munlock(jlong address, jlong p2) { return call_static_method<"munlock", void>(address, p2); }
	static void munmap(jlong address, jlong p2) { return call_static_method<"munmap", void>(address, p2); }
	static jni::ref<java::io::FileDescriptor> open(jni::ref<java::lang::String> path, jint flags, jint mode) { return call_static_method<"open", jni::ref<java::io::FileDescriptor>>(path, flags, mode); }
	static jni::ref<jni::array<java::io::FileDescriptor>> pipe() { return call_static_method<"pipe", jni::ref<jni::array<java::io::FileDescriptor>>>(); }
	static jint poll(jni::ref<jni::array<android::system::StructPollfd>> fds, jint timeoutMs) { return call_static_method<"poll", jint>(fds, timeoutMs); }
	static void posix_fallocate(jni::ref<java::io::FileDescriptor> fd, jlong offset, jlong p3) { return call_static_method<"posix_fallocate", void>(fd, offset, p3); }
	static jint prctl(jint option, jlong arg2, jlong p3, jlong arg3, jlong p5) { return call_static_method<"prctl", jint>(option, arg2, p3, arg3, p5); }
	static jint pread(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::nio::ByteBuffer> buffer, jlong offset) { return call_static_method<"pread", jint>(fd, buffer, offset); }
	static jint pread(jni::ref<java::io::FileDescriptor> fd, jni::ref<jni::array<jbyte>> bytes, jint byteOffset, jint byteCount, jlong offset) { return call_static_method<"pread", jint>(fd, bytes, byteOffset, byteCount, offset); }
	static jint pwrite(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::nio::ByteBuffer> buffer, jlong offset) { return call_static_method<"pwrite", jint>(fd, buffer, offset); }
	static jint pwrite(jni::ref<java::io::FileDescriptor> fd, jni::ref<jni::array<jbyte>> bytes, jint byteOffset, jint byteCount, jlong offset) { return call_static_method<"pwrite", jint>(fd, bytes, byteOffset, byteCount, offset); }
	static jint read(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::nio::ByteBuffer> buffer) { return call_static_method<"read", jint>(fd, buffer); }
	static jint read(jni::ref<java::io::FileDescriptor> fd, jni::ref<jni::array<jbyte>> bytes, jint byteOffset, jint byteCount) { return call_static_method<"read", jint>(fd, bytes, byteOffset, byteCount); }
	static jni::ref<java::lang::String> readlink(jni::ref<java::lang::String> path) { return call_static_method<"readlink", jni::ref<java::lang::String>>(path); }
	static jint readv(jni::ref<java::io::FileDescriptor> fd, jni::ref<jni::array<java::lang::Object>> buffers, jni::ref<jni::array<jint>> offsets, jni::ref<jni::array<jint>> byteCounts) { return call_static_method<"readv", jint>(fd, buffers, offsets, byteCounts); }
	static jint recvfrom(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::nio::ByteBuffer> buffer, jint flags, jni::ref<java::net::InetSocketAddress> srcAddress) { return call_static_method<"recvfrom", jint>(fd, buffer, flags, srcAddress); }
	static jint recvfrom(jni::ref<java::io::FileDescriptor> fd, jni::ref<jni::array<jbyte>> bytes, jint byteOffset, jint byteCount, jint flags, jni::ref<java::net::InetSocketAddress> srcAddress) { return call_static_method<"recvfrom", jint>(fd, bytes, byteOffset, byteCount, flags, srcAddress); }
	static void remove(jni::ref<java::lang::String> path) { return call_static_method<"remove", void>(path); }
	static void removexattr(jni::ref<java::lang::String> path, jni::ref<java::lang::String> name) { return call_static_method<"removexattr", void>(path, name); }
	static void rename(jni::ref<java::lang::String> oldPath, jni::ref<java::lang::String> newPath) { return call_static_method<"rename", void>(oldPath, newPath); }
	static jlong sendfile(jni::ref<java::io::FileDescriptor> outFd, jni::ref<java::io::FileDescriptor> inFd, jni::ref<android::system::Int64Ref> offset, jlong byteCount) { return call_static_method<"sendfile", jlong>(outFd, inFd, offset, byteCount); }
	static jint sendto(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::nio::ByteBuffer> buffer, jint flags, jni::ref<java::net::InetAddress> inetAddress, jint port) { return call_static_method<"sendto", jint>(fd, buffer, flags, inetAddress, port); }
	static jint sendto(jni::ref<java::io::FileDescriptor> fd, jni::ref<jni::array<jbyte>> bytes, jint byteOffset, jint byteCount, jint flags, jni::ref<java::net::InetAddress> inetAddress, jint port) { return call_static_method<"sendto", jint>(fd, bytes, byteOffset, byteCount, flags, inetAddress, port); }
	static jint sendto(jni::ref<java::io::FileDescriptor> fd, jni::ref<jni::array<jbyte>> bytes, jint byteOffset, jint byteCount, jint flags, jni::ref<java::net::SocketAddress> address) { return call_static_method<"sendto", jint>(fd, bytes, byteOffset, byteCount, flags, address); }
	static void setegid(jint egid) { return call_static_method<"setegid", void>(egid); }
	static void setenv(jni::ref<java::lang::String> name, jni::ref<java::lang::String> value, jboolean overwrite) { return call_static_method<"setenv", void>(name, value, overwrite); }
	static void seteuid(jint euid) { return call_static_method<"seteuid", void>(euid); }
	static void setgid(jint gid) { return call_static_method<"setgid", void>(gid); }
	static jint setsid() { return call_static_method<"setsid", jint>(); }
	static void setsockoptInt(jni::ref<java::io::FileDescriptor> fd, jint level, jint option, jint value) { return call_static_method<"setsockoptInt", void>(fd, level, option, value); }
	static void setsockoptTimeval(jni::ref<java::io::FileDescriptor> fd, jint level, jint option, jni::ref<android::system::StructTimeval> value) { return call_static_method<"setsockoptTimeval", void>(fd, level, option, value); }
	static void setuid(jint uid) { return call_static_method<"setuid", void>(uid); }
	static void setxattr(jni::ref<java::lang::String> path, jni::ref<java::lang::String> name, jni::ref<jni::array<jbyte>> value, jint flags) { return call_static_method<"setxattr", void>(path, name, value, flags); }
	static void shutdown(jni::ref<java::io::FileDescriptor> fd, jint how) { return call_static_method<"shutdown", void>(fd, how); }
	static jni::ref<java::io::FileDescriptor> socket(jint domain, jint type, jint protocol) { return call_static_method<"socket", jni::ref<java::io::FileDescriptor>>(domain, type, protocol); }
	static void socketpair(jint domain, jint type, jint protocol, jni::ref<java::io::FileDescriptor> fd1, jni::ref<java::io::FileDescriptor> fd2) { return call_static_method<"socketpair", void>(domain, type, protocol, fd1, fd2); }
	static jni::ref<android::system::StructStat> stat(jni::ref<java::lang::String> path) { return call_static_method<"stat", jni::ref<android::system::StructStat>>(path); }
	static jni::ref<android::system::StructStatVfs> statvfs(jni::ref<java::lang::String> path) { return call_static_method<"statvfs", jni::ref<android::system::StructStatVfs>>(path); }
	static jni::ref<java::lang::String> strerror(jint errno) { return call_static_method<"strerror", jni::ref<java::lang::String>>(errno); }
	static jni::ref<java::lang::String> strsignal(jint signal) { return call_static_method<"strsignal", jni::ref<java::lang::String>>(signal); }
	static void symlink(jni::ref<java::lang::String> oldPath, jni::ref<java::lang::String> newPath) { return call_static_method<"symlink", void>(oldPath, newPath); }
	static jlong sysconf(jint name) { return call_static_method<"sysconf", jlong>(name); }
	static void tcdrain(jni::ref<java::io::FileDescriptor> fd) { return call_static_method<"tcdrain", void>(fd); }
	static void tcsendbreak(jni::ref<java::io::FileDescriptor> fd, jint duration) { return call_static_method<"tcsendbreak", void>(fd, duration); }
	static jint umask(jint mask) { return call_static_method<"umask", jint>(mask); }
	static jni::ref<android::system::StructUtsname> uname() { return call_static_method<"uname", jni::ref<android::system::StructUtsname>>(); }
	static void unsetenv(jni::ref<java::lang::String> name) { return call_static_method<"unsetenv", void>(name); }
	static jint write(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::nio::ByteBuffer> buffer) { return call_static_method<"write", jint>(fd, buffer); }
	static jint write(jni::ref<java::io::FileDescriptor> fd, jni::ref<jni::array<jbyte>> bytes, jint byteOffset, jint byteCount) { return call_static_method<"write", jint>(fd, bytes, byteOffset, byteCount); }
	static jint writev(jni::ref<java::io::FileDescriptor> fd, jni::ref<jni::array<java::lang::Object>> buffers, jni::ref<jni::array<jint>> offsets, jni::ref<jni::array<jint>> byteCounts) { return call_static_method<"writev", jint>(fd, buffers, offsets, byteCounts); }

protected:

	Os(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SYSTEM_OS