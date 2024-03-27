// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_JDKBRIDGE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_JDKBRIDGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::util { class JDKBridge; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::util::JDKBridge>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/util/JDKBridge";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_JDKBRIDGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_JDKBRIDGE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_JDKBRIDGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::util::JDKBridge : public jni::object_base<"com/sun/corba/se/impl/util/JDKBridge",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::impl::util::JDKBridge> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> getLocalCodebase() { return call_static_method<"getLocalCodebase", jni::ref<java::lang::String>>(); }
	static jboolean useCodebaseOnly() { return call_static_method<"useCodebaseOnly", jboolean>(); }
	static jni::ref<java::lang::Class> loadClass(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::ClassLoader> p3) { return call_static_method<"loadClass", jni::ref<java::lang::Class>>(p1, p2, p3); }
	static jni::ref<java::lang::Class> loadClass(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"loadClass", jni::ref<java::lang::Class>>(p1, p2); }
	static jni::ref<java::lang::Class> loadClass(jni::ref<java::lang::String> p1) { return call_static_method<"loadClass", jni::ref<java::lang::Class>>(p1); }
	static void main(jni::ref<jni::array<java::lang::String>> p1) { return call_static_method<"main", void>(p1); }
	static void setCodebaseProperties() { return call_static_method<"setCodebaseProperties", void>(); }
	static void setLocalCodebase(jni::ref<java::lang::String> p1) { return call_static_method<"setLocalCodebase", void>(p1); }

protected:

	JDKBridge(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_JDKBRIDGE