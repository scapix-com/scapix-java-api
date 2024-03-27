// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/management/QueryEval.h>
#include <scapix/java_api/javax/management/QueryExp.h>

#ifndef SCAPIX_JAVA_API_JAVAX_MANAGEMENT_BETWEENQUERYEXP_FWD
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_BETWEENQUERYEXP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::management { class BetweenQueryExp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::management::BetweenQueryExp>
{
	static constexpr fixed_string class_name = "javax/management/BetweenQueryExp";
	using base_classes = std::tuple<scapix::java_api::javax::management::QueryEval, scapix::java_api::javax::management::QueryExp>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_BETWEENQUERYEXP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_MANAGEMENT_BETWEENQUERYEXP)
#define SCAPIX_JAVA_API_JAVAX_MANAGEMENT_BETWEENQUERYEXP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/management/ObjectName.h>
#include <scapix/java_api/javax/management/ValueExp.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::management::BetweenQueryExp : public jni::object_base<"javax/management/BetweenQueryExp",
	javax::management::QueryEval,
	javax::management::QueryExp>
{
public:

	static jni::ref<javax::management::BetweenQueryExp> new_object() { return base_::new_object(); }
	static jni::ref<javax::management::BetweenQueryExp> new_object(jni::ref<javax::management::ValueExp> p1, jni::ref<javax::management::ValueExp> p2, jni::ref<javax::management::ValueExp> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<javax::management::ValueExp> getCheckedValue() { return call_method<"getCheckedValue", jni::ref<javax::management::ValueExp>>(); }
	jni::ref<javax::management::ValueExp> getLowerBound() { return call_method<"getLowerBound", jni::ref<javax::management::ValueExp>>(); }
	jni::ref<javax::management::ValueExp> getUpperBound() { return call_method<"getUpperBound", jni::ref<javax::management::ValueExp>>(); }
	jboolean apply(jni::ref<javax::management::ObjectName> p1) { return call_method<"apply", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	BetweenQueryExp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_MANAGEMENT_BETWEENQUERYEXP