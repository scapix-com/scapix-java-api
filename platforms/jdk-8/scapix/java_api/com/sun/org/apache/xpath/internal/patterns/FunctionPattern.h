// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/patterns/StepPattern.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_PATTERNS_FUNCTIONPATTERN_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_PATTERNS_FUNCTIONPATTERN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::patterns { class FunctionPattern; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::patterns::FunctionPattern>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/patterns/FunctionPattern";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::patterns::StepPattern>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_PATTERNS_FUNCTIONPATTERN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_PATTERNS_FUNCTIONPATTERN)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_PATTERNS_FUNCTIONPATTERN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/Expression.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <scapix/java_api/java/util/Vector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::patterns::FunctionPattern : public jni::object_base<"com/sun/org/apache/xpath/internal/patterns/FunctionPattern",
	com::sun::org::apache::xpath::internal::patterns::StepPattern>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::patterns::FunctionPattern> new_object(jni::ref<com::sun::org::apache::xpath::internal::Expression> p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }
	void calcScore() { return call_method<"calcScore", void>(); }
	void fixupVariables(jni::ref<java::util::Vector> p1, jint p2) { return call_method<"fixupVariables", void>(p1, p2); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> execute(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1, jint p2) { return call_method<"execute", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1, p2); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> execute(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1, jint p2, jni::ref<com::sun::org::apache::xml::internal::dtm::DTM> p3, jint p4) { return call_method<"execute", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1, p2, p3, p4); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> execute(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"execute", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1); }

protected:

	FunctionPattern(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_PATTERNS_FUNCTIONPATTERN