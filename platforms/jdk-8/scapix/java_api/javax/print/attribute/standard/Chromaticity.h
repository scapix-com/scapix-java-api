// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/print/attribute/EnumSyntax.h>
#include <scapix/java_api/javax/print/attribute/DocAttribute.h>
#include <scapix/java_api/javax/print/attribute/PrintRequestAttribute.h>
#include <scapix/java_api/javax/print/attribute/PrintJobAttribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_CHROMATICITY_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_CHROMATICITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute::standard { class Chromaticity; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::standard::Chromaticity>
{
	static constexpr fixed_string class_name = "javax/print/attribute/standard/Chromaticity";
	using base_classes = std::tuple<scapix::java_api::javax::print::attribute::EnumSyntax, scapix::java_api::javax::print::attribute::DocAttribute, scapix::java_api::javax::print::attribute::PrintRequestAttribute, scapix::java_api::javax::print::attribute::PrintJobAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_CHROMATICITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_CHROMATICITY)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_CHROMATICITY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::attribute::standard::Chromaticity : public jni::object_base<"javax/print/attribute/standard/Chromaticity",
	javax::print::attribute::EnumSyntax,
	javax::print::attribute::DocAttribute,
	javax::print::attribute::PrintRequestAttribute,
	javax::print::attribute::PrintJobAttribute>
{
public:

	static jni::ref<javax::print::attribute::standard::Chromaticity> MONOCHROME() { return get_static_field<"MONOCHROME", jni::ref<javax::print::attribute::standard::Chromaticity>>(); }
	static jni::ref<javax::print::attribute::standard::Chromaticity> COLOR() { return get_static_field<"COLOR", jni::ref<javax::print::attribute::standard::Chromaticity>>(); }

	jni::ref<java::lang::Class> getCategory() { return call_method<"getCategory", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	Chromaticity(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_CHROMATICITY