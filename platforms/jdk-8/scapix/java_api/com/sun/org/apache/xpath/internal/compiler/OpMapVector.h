// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPMAPVECTOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPMAPVECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::compiler { class OpMapVector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::compiler::OpMapVector>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/compiler/OpMapVector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPMAPVECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPMAPVECTOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPMAPVECTOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::compiler::OpMapVector : public jni::object_base<"com/sun/org/apache/xpath/internal/compiler/OpMapVector",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::compiler::OpMapVector> new_object(jint p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }
	jint elementAt(jint p1) { return call_method<"elementAt", jint>(p1); }
	void setElementAt(jint p1, jint p2) { return call_method<"setElementAt", void>(p1, p2); }
	void setToSize(jint p1) { return call_method<"setToSize", void>(p1); }

protected:

	OpMapVector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_OPMAPVECTOR