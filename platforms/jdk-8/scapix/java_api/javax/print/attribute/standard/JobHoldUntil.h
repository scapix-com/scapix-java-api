// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/print/attribute/DateTimeSyntax.h>
#include <scapix/java_api/javax/print/attribute/PrintRequestAttribute.h>
#include <scapix/java_api/javax/print/attribute/PrintJobAttribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_JOBHOLDUNTIL_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_JOBHOLDUNTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute::standard { class JobHoldUntil; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::standard::JobHoldUntil>
{
	static constexpr fixed_string class_name = "javax/print/attribute/standard/JobHoldUntil";
	using base_classes = std::tuple<scapix::java_api::javax::print::attribute::DateTimeSyntax, scapix::java_api::javax::print::attribute::PrintRequestAttribute, scapix::java_api::javax::print::attribute::PrintJobAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_JOBHOLDUNTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_JOBHOLDUNTIL)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_JOBHOLDUNTIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::attribute::standard::JobHoldUntil : public jni::object_base<"javax/print/attribute/standard/JobHoldUntil",
	javax::print::attribute::DateTimeSyntax,
	javax::print::attribute::PrintRequestAttribute,
	javax::print::attribute::PrintJobAttribute>
{
public:

	static jni::ref<javax::print::attribute::standard::JobHoldUntil> new_object(jni::ref<java::util::Date> p1) { return base_::new_object(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::Class> getCategory() { return call_method<"getCategory", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	JobHoldUntil(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_JOBHOLDUNTIL
