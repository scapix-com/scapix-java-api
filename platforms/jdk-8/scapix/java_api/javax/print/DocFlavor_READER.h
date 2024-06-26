// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/print/DocFlavor.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_DOCFLAVOR_READER_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_DOCFLAVOR_READER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print { class DocFlavor_READER; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::DocFlavor_READER>
{
	static constexpr fixed_string class_name = "javax/print/DocFlavor$READER";
	using base_classes = std::tuple<scapix::java_api::javax::print::DocFlavor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_DOCFLAVOR_READER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_DOCFLAVOR_READER)
#define SCAPIX_JAVA_API_JAVAX_PRINT_DOCFLAVOR_READER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::DocFlavor_READER : public jni::object_base<"javax/print/DocFlavor$READER",
	javax::print::DocFlavor>
{
public:

	static jni::ref<javax::print::DocFlavor_READER> TEXT_PLAIN() { return get_static_field<"TEXT_PLAIN", jni::ref<javax::print::DocFlavor_READER>>(); }
	static jni::ref<javax::print::DocFlavor_READER> TEXT_HTML() { return get_static_field<"TEXT_HTML", jni::ref<javax::print::DocFlavor_READER>>(); }

	static jni::ref<javax::print::DocFlavor_READER> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	DocFlavor_READER(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_DOCFLAVOR_READER
