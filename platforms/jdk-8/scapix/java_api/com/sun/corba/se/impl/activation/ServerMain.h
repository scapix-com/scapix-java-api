// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_SERVERMAIN_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_SERVERMAIN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::activation { class ServerMain; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::activation::ServerMain>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/activation/ServerMain";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_SERVERMAIN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_SERVERMAIN)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_SERVERMAIN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::activation::ServerMain : public jni::object_base<"com/sun/corba/se/impl/activation/ServerMain",
	java::lang::Object>
{
public:

	static jint OK() { return get_static_field<"OK", jint>(); }
	static jint MAIN_CLASS_NOT_FOUND() { return get_static_field<"MAIN_CLASS_NOT_FOUND", jint>(); }
	static jint NO_MAIN_METHOD() { return get_static_field<"NO_MAIN_METHOD", jint>(); }
	static jint APPLICATION_ERROR() { return get_static_field<"APPLICATION_ERROR", jint>(); }
	static jint UNKNOWN_ERROR() { return get_static_field<"UNKNOWN_ERROR", jint>(); }
	static jint NO_SERVER_ID() { return get_static_field<"NO_SERVER_ID", jint>(); }
	static jint REGISTRATION_FAILED() { return get_static_field<"REGISTRATION_FAILED", jint>(); }

	static jni::ref<com::sun::corba::se::impl::activation::ServerMain> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> printResult(jint p1) { return call_static_method<"printResult", jni::ref<java::lang::String>>(p1); }
	static void logInformation(jni::ref<java::lang::String> p1) { return call_static_method<"logInformation", void>(p1); }
	static void logError(jni::ref<java::lang::String> p1) { return call_static_method<"logError", void>(p1); }
	static void logTerminal(jni::ref<java::lang::String> p1, jint p2) { return call_static_method<"logTerminal", void>(p1, p2); }
	static void main(jni::ref<jni::array<java::lang::String>> p1) { return call_static_method<"main", void>(p1); }

protected:

	ServerMain(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_SERVERMAIN