// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/QueryEval.h>
#include <scapix/java_api/javax/management/QueryExp.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MATCHQUERYEXP_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MATCHQUERYEXP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class MatchQueryExp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::MatchQueryExp>
{
	static constexpr fixed_string class_name = "javax/management/MatchQueryExp";
	using base_classes = std::tuple<scapix::java_api::javax::management::QueryEval, scapix::java_api::javax::management::QueryExp>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MATCHQUERYEXP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MATCHQUERYEXP)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MATCHQUERYEXP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/AttributeValueExp.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#include <scapix/java_api/javax/management/StringValueExp.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::management::MatchQueryExp : public jni::object_base<"javax/management/MatchQueryExp",
	javax::management::QueryEval,
	javax::management::QueryExp>
{
public:

	static jni::ref<javax::management::MatchQueryExp> new_object() { return base_::new_object(); }
	static jni::ref<javax::management::MatchQueryExp> new_object(jni::ref<javax::management::AttributeValueExp> p1, jni::ref<javax::management::StringValueExp> p2) { return base_::new_object(p1, p2); }
	jni::ref<javax::management::AttributeValueExp> getAttribute() { return call_method<"getAttribute", jni::ref<javax::management::AttributeValueExp>>(); }
	jni::ref<java::lang::String> getPattern() { return call_method<"getPattern", jni::ref<java::lang::String>>(); }
	jboolean apply(jni::ref<javax::management::ObjectName> p1) { return call_method<"apply", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	MatchQueryExp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_MATCHQUERYEXP
