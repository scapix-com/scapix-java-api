// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/print/attribute/EnumSyntax.h>
#include <scapix/java_api/javax/print/attribute/DocAttribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_COMPRESSION_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_COMPRESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print::attribute::standard { class Compression; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::attribute::standard::Compression>
{
	static constexpr fixed_string class_name = "javax/print/attribute/standard/Compression";
	using base_classes = std::tuple<scapix::java_api::javax::print::attribute::EnumSyntax, scapix::java_api::javax::print::attribute::DocAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_COMPRESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_COMPRESSION)
#define SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_COMPRESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::attribute::standard::Compression : public jni::object_base<"javax/print/attribute/standard/Compression",
	javax::print::attribute::EnumSyntax,
	javax::print::attribute::DocAttribute>
{
public:

	static jni::ref<javax::print::attribute::standard::Compression> NONE() { return get_static_field<"NONE", jni::ref<javax::print::attribute::standard::Compression>>(); }
	static jni::ref<javax::print::attribute::standard::Compression> DEFLATE() { return get_static_field<"DEFLATE", jni::ref<javax::print::attribute::standard::Compression>>(); }
	static jni::ref<javax::print::attribute::standard::Compression> GZIP() { return get_static_field<"GZIP", jni::ref<javax::print::attribute::standard::Compression>>(); }
	static jni::ref<javax::print::attribute::standard::Compression> COMPRESS() { return get_static_field<"COMPRESS", jni::ref<javax::print::attribute::standard::Compression>>(); }

	jni::ref<java::lang::Class> getCategory() { return call_method<"getCategory", jni::ref<java::lang::Class>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	Compression(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_ATTRIBUTE_STANDARD_COMPRESSION
