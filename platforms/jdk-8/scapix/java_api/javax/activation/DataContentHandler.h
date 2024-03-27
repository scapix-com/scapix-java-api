// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATACONTENTHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATACONTENTHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::activation { class DataContentHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::activation::DataContentHandler>
{
	static constexpr fixed_string class_name = "javax/activation/DataContentHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATACONTENTHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATACONTENTHANDLER)
#define SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATACONTENTHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/datatransfer/DataFlavor.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/activation/DataSource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::activation::DataContentHandler : public jni::object_base<"javax/activation/DataContentHandler",
	java::lang::Object>
{
public:

	jni::ref<jni::array<java::awt::datatransfer::DataFlavor>> getTransferDataFlavors() { return call_method<"getTransferDataFlavors", jni::ref<jni::array<java::awt::datatransfer::DataFlavor>>>(); }
	jni::ref<java::lang::Object> getTransferData(jni::ref<java::awt::datatransfer::DataFlavor> p1, jni::ref<javax::activation::DataSource> p2) { return call_method<"getTransferData", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> getContent(jni::ref<javax::activation::DataSource> p1) { return call_method<"getContent", jni::ref<java::lang::Object>>(p1); }
	void writeTo(jni::ref<java::lang::Object> p1, jni::ref<java::lang::String> p2, jni::ref<java::io::OutputStream> p3) { return call_method<"writeTo", void>(p1, p2, p3); }

protected:

	DataContentHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATACONTENTHANDLER