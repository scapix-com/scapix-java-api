// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_SECURITYMANAGER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_SECURITYMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class SecurityManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::SecurityManager>
{
	static constexpr fixed_string class_name = "java/lang/SecurityManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SECURITYMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_SECURITYMANAGER)
#define SCAPIX_JAVA_API_JAVA_LANG_SECURITYMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Thread.h>
#include <scapix/java_api/java/lang/ThreadGroup.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/security/Permission.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::SecurityManager : public jni::object_base<"java/lang/SecurityManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::SecurityManager> new_object() { return base_::new_object(); }
	void checkAccept(jni::ref<java::lang::String> host, jint port) { return call_method<"checkAccept", void>(host, port); }
	void checkAccess(jni::ref<java::lang::Thread> thread) { return call_method<"checkAccess", void>(thread); }
	void checkAccess(jni::ref<java::lang::ThreadGroup> group) { return call_method<"checkAccess", void>(group); }
	void checkConnect(jni::ref<java::lang::String> host, jint port) { return call_method<"checkConnect", void>(host, port); }
	void checkConnect(jni::ref<java::lang::String> host, jint port, jni::ref<java::lang::Object> context) { return call_method<"checkConnect", void>(host, port, context); }
	void checkCreateClassLoader() { return call_method<"checkCreateClassLoader", void>(); }
	void checkDelete(jni::ref<java::lang::String> file) { return call_method<"checkDelete", void>(file); }
	void checkExec(jni::ref<java::lang::String> cmd) { return call_method<"checkExec", void>(cmd); }
	void checkExit(jint status) { return call_method<"checkExit", void>(status); }
	void checkLink(jni::ref<java::lang::String> libName) { return call_method<"checkLink", void>(libName); }
	void checkListen(jint port) { return call_method<"checkListen", void>(port); }
	void checkMemberAccess(jni::ref<java::lang::Class> cls, jint type) { return call_method<"checkMemberAccess", void>(cls, type); }
	void checkMulticast(jni::ref<java::net::InetAddress> maddr) { return call_method<"checkMulticast", void>(maddr); }
	void checkMulticast(jni::ref<java::net::InetAddress> maddr, jbyte ttl) { return call_method<"checkMulticast", void>(maddr, ttl); }
	void checkPackageAccess(jni::ref<java::lang::String> packageName) { return call_method<"checkPackageAccess", void>(packageName); }
	void checkPackageDefinition(jni::ref<java::lang::String> packageName) { return call_method<"checkPackageDefinition", void>(packageName); }
	void checkPropertiesAccess() { return call_method<"checkPropertiesAccess", void>(); }
	void checkPropertyAccess(jni::ref<java::lang::String> key) { return call_method<"checkPropertyAccess", void>(key); }
	void checkRead(jni::ref<java::io::FileDescriptor> fd) { return call_method<"checkRead", void>(fd); }
	void checkRead(jni::ref<java::lang::String> file) { return call_method<"checkRead", void>(file); }
	void checkRead(jni::ref<java::lang::String> file, jni::ref<java::lang::Object> context) { return call_method<"checkRead", void>(file, context); }
	void checkSecurityAccess(jni::ref<java::lang::String> target) { return call_method<"checkSecurityAccess", void>(target); }
	void checkSetFactory() { return call_method<"checkSetFactory", void>(); }
	jboolean checkTopLevelWindow(jni::ref<java::lang::Object> window) { return call_method<"checkTopLevelWindow", jboolean>(window); }
	void checkSystemClipboardAccess() { return call_method<"checkSystemClipboardAccess", void>(); }
	void checkAwtEventQueueAccess() { return call_method<"checkAwtEventQueueAccess", void>(); }
	void checkPrintJobAccess() { return call_method<"checkPrintJobAccess", void>(); }
	void checkWrite(jni::ref<java::io::FileDescriptor> fd) { return call_method<"checkWrite", void>(fd); }
	void checkWrite(jni::ref<java::lang::String> file) { return call_method<"checkWrite", void>(file); }
	jboolean getInCheck() { return call_method<"getInCheck", jboolean>(); }
	jni::ref<java::lang::ThreadGroup> getThreadGroup() { return call_method<"getThreadGroup", jni::ref<java::lang::ThreadGroup>>(); }
	jni::ref<java::lang::Object> getSecurityContext() { return call_method<"getSecurityContext", jni::ref<java::lang::Object>>(); }
	void checkPermission(jni::ref<java::security::Permission> permission) { return call_method<"checkPermission", void>(permission); }
	void checkPermission(jni::ref<java::security::Permission> permission, jni::ref<java::lang::Object> context) { return call_method<"checkPermission", void>(permission, context); }

protected:

	SecurityManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_SECURITYMANAGER
