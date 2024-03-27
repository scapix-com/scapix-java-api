// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_JAVAWRAPPER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_JAVAWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::util { class JavaWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::util::JavaWrapper>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/util/JavaWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_JAVAWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_JAVAWRAPPER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_JAVAWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::util::JavaWrapper : public jni::object_base<"com/sun/org/apache/bcel/internal/util/JavaWrapper",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::util::JavaWrapper> new_object(jni::ref<java::lang::ClassLoader> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::util::JavaWrapper> new_object() { return base_::new_object(); }
	void runMain(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::String>> p2) { return call_method<"runMain", void>(p1, p2); }
	static void _main(jni::ref<jni::array<java::lang::String>> p1) { return call_static_method<"_main", void>(p1); }

protected:

	JavaWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_JAVAWRAPPER