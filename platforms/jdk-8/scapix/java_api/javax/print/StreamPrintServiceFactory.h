// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_PRINT_STREAMPRINTSERVICEFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_PRINT_STREAMPRINTSERVICEFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::print { class StreamPrintServiceFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::print::StreamPrintServiceFactory>
{
	static constexpr fixed_string class_name = "javax/print/StreamPrintServiceFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_STREAMPRINTSERVICEFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_PRINT_STREAMPRINTSERVICEFACTORY)
#define SCAPIX_JAVA_API_JAVAX_PRINT_STREAMPRINTSERVICEFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/print/DocFlavor.h>
#include <scapix/java_api/javax/print/StreamPrintService.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::print::StreamPrintServiceFactory : public jni::object_base<"javax/print/StreamPrintServiceFactory",
	java::lang::Object>
{
public:

	static jni::ref<javax::print::StreamPrintServiceFactory> new_object() { return base_::new_object(); }
	static jni::ref<jni::array<javax::print::StreamPrintServiceFactory>> lookupStreamPrintServiceFactories(jni::ref<javax::print::DocFlavor> p1, jni::ref<java::lang::String> p2) { return call_static_method<"lookupStreamPrintServiceFactories", jni::ref<jni::array<javax::print::StreamPrintServiceFactory>>>(p1, p2); }
	jni::ref<java::lang::String> getOutputFormat() { return call_method<"getOutputFormat", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<javax::print::DocFlavor>> getSupportedDocFlavors() { return call_method<"getSupportedDocFlavors", jni::ref<jni::array<javax::print::DocFlavor>>>(); }
	jni::ref<javax::print::StreamPrintService> getPrintService(jni::ref<java::io::OutputStream> p1) { return call_method<"getPrintService", jni::ref<javax::print::StreamPrintService>>(p1); }

protected:

	StreamPrintServiceFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_PRINT_STREAMPRINTSERVICEFACTORY
