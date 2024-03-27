// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_VERSION_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_VERSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::util { class Version; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::util::Version>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/util/Version";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_VERSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_VERSION)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_VERSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::util::Version : public jni::object_base<"com/sun/corba/se/impl/util/Version",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> PROJECT_NAME() { return get_static_field<"PROJECT_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VERSION() { return get_static_field<"VERSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BUILD() { return get_static_field<"BUILD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BUILD_TIME() { return get_static_field<"BUILD_TIME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FULL() { return get_static_field<"FULL", jni::ref<java::lang::String>>(); }

	static jni::ref<com::sun::corba::se::impl::util::Version> new_object() { return base_::new_object(); }
	static jni::ref<java::lang::String> asString() { return call_static_method<"asString", jni::ref<java::lang::String>>(); }
	static void main(jni::ref<jni::array<java::lang::String>> p1) { return call_static_method<"main", void>(p1); }

protected:

	Version(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_VERSION
