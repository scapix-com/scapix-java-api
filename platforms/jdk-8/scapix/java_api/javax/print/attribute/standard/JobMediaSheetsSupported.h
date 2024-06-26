// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/print/attribute/SetOfIntegerSyntax.h>
#include <scapix/java_api/javax/print/attribute/SupportedValuesAttribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_JOBMEDIASHEETSSUPPORTED_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_JOBMEDIASHEETSSUPPORTED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute::standard { class JobMediaSheetsSupported; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::standard::JobMediaSheetsSupported>
{
	static constexpr fixed_string class_name = "javax/print/attribute/standard/JobMediaSheetsSupported";
	using base_classes = std::tuple<scapix::java_api::javax::print::attribute::SetOfIntegerSyntax, scapix::java_api::javax::print::attribute::SupportedValuesAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_JOBMEDIASHEETSSUPPORTED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_JOBMEDIASHEETSSUPPORTED)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_JOBMEDIASHEETSSUPPORTED

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::attribute::standard::JobMediaSheetsSupported : public jni::object_base<"javax/print/attribute/standard/JobMediaSheetsSupported",
	javax::print::attribute::SetOfIntegerSyntax,
	javax::print::attribute::SupportedValuesAttribute>
{
public:

	static jni::ref<javax::print::attribute::standard::JobMediaSheetsSupported> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::Class> getCategory() { return call_method<"getCategory", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	JobMediaSheetsSupported(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_JOBMEDIASHEETSSUPPORTED
