// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/functions/FunctionMultiArgs.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCCONCAT_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCCONCAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::functions { class FuncConcat; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::functions::FuncConcat>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/functions/FuncConcat";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCCONCAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCCONCAT)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCCONCAT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::functions::FuncConcat : public jni::object_base<"com/sun/org/apache/xpath/internal/functions/FuncConcat",
	com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::functions::FuncConcat> new_object() { return base_::new_object(); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> execute(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"execute", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1); }
	void checkNumberArgs(jint p1) { return call_method<"checkNumberArgs", void>(p1); }

protected:

	FuncConcat(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCCONCAT