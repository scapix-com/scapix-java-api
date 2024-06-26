// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_DOC_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_DOC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print { class Doc; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::Doc>
{
	static constexpr fixed_string class_name = "javax/print/Doc";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_DOC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_DOC)
#define SCAPIX_JAVA_API_JAVAX_PRINT_DOC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/javax/print/DocFlavor.h>
#include <scapix/java_api/javax/print/attribute/DocAttributeSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::Doc : public jni::object_base<"javax/print/Doc",
	java::lang::Object>
{
public:

	jni::ref<javax::print::DocFlavor> getDocFlavor() { return call_method<"getDocFlavor", jni::ref<javax::print::DocFlavor>>(); }
	jni::ref<java::lang::Object> getPrintData() { return call_method<"getPrintData", jni::ref<java::lang::Object>>(); }
	jni::ref<javax::print::attribute::DocAttributeSet> getAttributes() { return call_method<"getAttributes", jni::ref<javax::print::attribute::DocAttributeSet>>(); }
	jni::ref<java::io::Reader> getReaderForText() { return call_method<"getReaderForText", jni::ref<java::io::Reader>>(); }
	jni::ref<java::io::InputStream> getStreamForBytes() { return call_method<"getStreamForBytes", jni::ref<java::io::InputStream>>(); }

protected:

	Doc(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_DOC
