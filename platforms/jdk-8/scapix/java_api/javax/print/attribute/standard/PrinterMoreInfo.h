// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/print/attribute/URISyntax.h>
#include <scapix/java_api/javax/print/attribute/PrintServiceAttribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERMOREINFO_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERMOREINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute::standard { class PrinterMoreInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::standard::PrinterMoreInfo>
{
	static constexpr fixed_string class_name = "javax/print/attribute/standard/PrinterMoreInfo";
	using base_classes = std::tuple<scapix::java_api::javax::print::attribute::URISyntax, scapix::java_api::javax::print::attribute::PrintServiceAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERMOREINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERMOREINFO)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERMOREINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::attribute::standard::PrinterMoreInfo : public jni::object_base<"javax/print/attribute/standard/PrinterMoreInfo",
	javax::print::attribute::URISyntax,
	javax::print::attribute::PrintServiceAttribute>
{
public:

	static jni::ref<javax::print::attribute::standard::PrinterMoreInfo> new_object(jni::ref<java::net::URI> p1) { return base_::new_object(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::Class> getCategory() { return call_method<"getCategory", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	PrinterMoreInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_PRINTERMOREINFO
