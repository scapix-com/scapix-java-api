// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/print/attribute/EnumSyntax.h>
#include <scapix/java_api/javax/print/attribute/PrintRequestAttribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_DIALOGTYPESELECTION_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_DIALOGTYPESELECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute::standard { class DialogTypeSelection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::standard::DialogTypeSelection>
{
	static constexpr fixed_string class_name = "javax/print/attribute/standard/DialogTypeSelection";
	using base_classes = std::tuple<scapix::java_api::javax::print::attribute::EnumSyntax, scapix::java_api::javax::print::attribute::PrintRequestAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_DIALOGTYPESELECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_DIALOGTYPESELECTION)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_DIALOGTYPESELECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::attribute::standard::DialogTypeSelection : public jni::object_base<"javax/print/attribute/standard/DialogTypeSelection",
	javax::print::attribute::EnumSyntax,
	javax::print::attribute::PrintRequestAttribute>
{
public:

	static jni::ref<javax::print::attribute::standard::DialogTypeSelection> NATIVE() { return get_static_field<"NATIVE", jni::ref<javax::print::attribute::standard::DialogTypeSelection>>(); }
	static jni::ref<javax::print::attribute::standard::DialogTypeSelection> COMMON() { return get_static_field<"COMMON", jni::ref<javax::print::attribute::standard::DialogTypeSelection>>(); }

	jni::ref<java::lang::Class> getCategory() { return call_method<"getCategory", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	DialogTypeSelection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_DIALOGTYPESELECTION
