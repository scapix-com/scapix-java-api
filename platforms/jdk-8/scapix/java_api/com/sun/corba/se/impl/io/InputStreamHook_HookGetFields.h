// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/ObjectInputStream_GetField.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_INPUTSTREAMHOOK_HOOKGETFIELDS_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_INPUTSTREAMHOOK_HOOKGETFIELDS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::io { class InputStreamHook_HookGetFields; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::io::InputStreamHook_HookGetFields>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/io/InputStreamHook$HookGetFields";
	using base_classes = std::tuple<scapix::java_api::java::io::ObjectInputStream_GetField>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_INPUTSTREAMHOOK_HOOKGETFIELDS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_INPUTSTREAMHOOK_HOOKGETFIELDS)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_INPUTSTREAMHOOK_HOOKGETFIELDS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/ObjectStreamClass.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::io::InputStreamHook_HookGetFields : public jni::object_base<"com/sun/corba/se/impl/io/InputStreamHook$HookGetFields",
	java::io::ObjectInputStream_GetField>
{
public:

	jni::ref<java::io::ObjectStreamClass> getObjectStreamClass() { return call_method<"getObjectStreamClass", jni::ref<java::io::ObjectStreamClass>>(); }
	jboolean defaulted(jni::ref<java::lang::String> p1) { return call_method<"defaulted", jboolean>(p1); }
	jboolean get(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"get", jboolean>(p1, p2); }
	jchar get(jni::ref<java::lang::String> p1, jchar p2) { return call_method<"get", jchar>(p1, p2); }
	jbyte get(jni::ref<java::lang::String> p1, jbyte p2) { return call_method<"get", jbyte>(p1, p2); }
	jshort get(jni::ref<java::lang::String> p1, jshort p2) { return call_method<"get", jshort>(p1, p2); }
	jint get(jni::ref<java::lang::String> p1, jint p2) { return call_method<"get", jint>(p1, p2); }
	jlong get(jni::ref<java::lang::String> p1, jlong p2) { return call_method<"get", jlong>(p1, p2); }
	jfloat get(jni::ref<java::lang::String> p1, jfloat p2) { return call_method<"get", jfloat>(p1, p2); }
	jdouble get(jni::ref<java::lang::String> p1, jdouble p2) { return call_method<"get", jdouble>(p1, p2); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"get", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	InputStreamHook_HookGetFields(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IO_INPUTSTREAMHOOK_HOOKGETFIELDS
