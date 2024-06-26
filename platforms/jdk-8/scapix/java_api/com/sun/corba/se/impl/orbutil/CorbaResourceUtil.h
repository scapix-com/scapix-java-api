// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_CORBARESOURCEUTIL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_CORBARESOURCEUTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::orbutil { class CorbaResourceUtil; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::orbutil::CorbaResourceUtil>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/orbutil/CorbaResourceUtil";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_CORBARESOURCEUTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_CORBARESOURCEUTIL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_CORBARESOURCEUTIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::orbutil::CorbaResourceUtil : public jni::object_base<"com/sun/corba/se/impl/orbutil/CorbaResourceUtil",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::impl::orbutil::CorbaResourceUtil> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> getString(jni::ref<java::lang::String> p1) { return call_static_method<"getString", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getText(jni::ref<java::lang::String> p1) { return call_static_method<"getText", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getText(jni::ref<java::lang::String> p1, jint p2) { return call_static_method<"getText", jni::ref<java::lang::String>>(p1, p2); }
	static jni::ref<java::lang::String> getText(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_static_method<"getText", jni::ref<java::lang::String>>(p1, p2); }
	static jni::ref<java::lang::String> getText(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_static_method<"getText", jni::ref<java::lang::String>>(p1, p2, p3); }
	static jni::ref<java::lang::String> getText(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4) { return call_static_method<"getText", jni::ref<java::lang::String>>(p1, p2, p3, p4); }

protected:

	CorbaResourceUtil(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_CORBARESOURCEUTIL
