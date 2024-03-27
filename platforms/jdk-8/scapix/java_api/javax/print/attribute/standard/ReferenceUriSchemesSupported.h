// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/print/attribute/EnumSyntax.h>
#include <scapix/java_api/javax/print/attribute/Attribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_REFERENCEURISCHEMESSUPPORTED_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_REFERENCEURISCHEMESSUPPORTED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute::standard { class ReferenceUriSchemesSupported; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::standard::ReferenceUriSchemesSupported>
{
	static constexpr fixed_string class_name = "javax/print/attribute/standard/ReferenceUriSchemesSupported";
	using base_classes = std::tuple<scapix::java_api::javax::print::attribute::EnumSyntax, scapix::java_api::javax::print::attribute::Attribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_REFERENCEURISCHEMESSUPPORTED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_REFERENCEURISCHEMESSUPPORTED)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_REFERENCEURISCHEMESSUPPORTED

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::attribute::standard::ReferenceUriSchemesSupported : public jni::object_base<"javax/print/attribute/standard/ReferenceUriSchemesSupported",
	javax::print::attribute::EnumSyntax,
	javax::print::attribute::Attribute>
{
public:

	static jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported> FTP() { return get_static_field<"FTP", jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported>>(); }
	static jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported> HTTP() { return get_static_field<"HTTP", jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported>>(); }
	static jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported> HTTPS() { return get_static_field<"HTTPS", jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported>>(); }
	static jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported> GOPHER() { return get_static_field<"GOPHER", jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported>>(); }
	static jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported> NEWS() { return get_static_field<"NEWS", jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported>>(); }
	static jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported> NNTP() { return get_static_field<"NNTP", jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported>>(); }
	static jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported> WAIS() { return get_static_field<"WAIS", jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported>>(); }
	static jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported> FILE() { return get_static_field<"FILE", jni::ref<javax::print::attribute::standard::ReferenceUriSchemesSupported>>(); }

	jni::ref<java::lang::Class> getCategory() { return call_method<"getCategory", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	ReferenceUriSchemesSupported(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_REFERENCEURISCHEMESSUPPORTED