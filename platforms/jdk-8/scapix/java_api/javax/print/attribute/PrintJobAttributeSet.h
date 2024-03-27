// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/print/attribute/AttributeSet.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_PRINTJOBATTRIBUTESET_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_PRINTJOBATTRIBUTESET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute { class PrintJobAttributeSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::PrintJobAttributeSet>
{
	static constexpr fixed_string class_name = "javax/print/attribute/PrintJobAttributeSet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::print::attribute::AttributeSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_PRINTJOBATTRIBUTESET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_PRINTJOBATTRIBUTESET)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_PRINTJOBATTRIBUTESET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/print/attribute/Attribute.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::attribute::PrintJobAttributeSet : public jni::object_base<"javax/print/attribute/PrintJobAttributeSet",
	java::lang::Object,
	javax::print::attribute::AttributeSet>
{
public:

	jboolean add(jni::ref<javax::print::attribute::Attribute> p1) { return call_method<"add", jboolean>(p1); }
	jboolean addAll(jni::ref<javax::print::attribute::AttributeSet> p1) { return call_method<"addAll", jboolean>(p1); }

protected:

	PrintJobAttributeSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_PRINTJOBATTRIBUTESET