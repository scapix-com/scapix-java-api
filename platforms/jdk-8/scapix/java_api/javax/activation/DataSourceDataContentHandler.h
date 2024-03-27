// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/activation/DataContentHandler.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATASOURCEDATACONTENTHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATASOURCEDATACONTENTHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::activation { class DataSourceDataContentHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::activation::DataSourceDataContentHandler>
{
	static constexpr fixed_string class_name = "javax/activation/DataSourceDataContentHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::activation::DataContentHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATASOURCEDATACONTENTHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATASOURCEDATACONTENTHANDLER)
#define SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATASOURCEDATACONTENTHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/datatransfer/DataFlavor.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/activation/DataSource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::activation::DataSourceDataContentHandler : public jni::object_base<"javax/activation/DataSourceDataContentHandler",
	java::lang::Object,
	javax::activation::DataContentHandler>
{
public:

	static jni::ref<javax::activation::DataSourceDataContentHandler> new_object(jni::ref<javax::activation::DataContentHandler> p1, jni::ref<javax::activation::DataSource> p2) { return base_::new_object(p1, p2); }
	jni::ref<jni::array<java::awt::datatransfer::DataFlavor>> getTransferDataFlavors() { return call_method<"getTransferDataFlavors", jni::ref<jni::array<java::awt::datatransfer::DataFlavor>>>(); }
	jni::ref<java::lang::Object> getTransferData(jni::ref<java::awt::datatransfer::DataFlavor> p1, jni::ref<javax::activation::DataSource> p2) { return call_method<"getTransferData", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> getContent(jni::ref<javax::activation::DataSource> p1) { return call_method<"getContent", jni::ref<java::lang::Object>>(p1); }
	void writeTo(jni::ref<java::lang::Object> p1, jni::ref<java::lang::String> p2, jni::ref<java::io::OutputStream> p3) { return call_method<"writeTo", void>(p1, p2, p3); }

protected:

	DataSourceDataContentHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATASOURCEDATACONTENTHANDLER
