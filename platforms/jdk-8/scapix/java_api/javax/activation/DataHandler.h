// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/datatransfer/Transferable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATAHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATAHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::activation { class DataHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::activation::DataHandler>
{
	static constexpr fixed_string class_name = "javax/activation/DataHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::datatransfer::Transferable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATAHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATAHANDLER)
#define SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATAHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/datatransfer/DataFlavor.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/javax/activation/CommandInfo.h>
#include <scapix/java_api/javax/activation/CommandMap.h>
#include <scapix/java_api/javax/activation/DataContentHandlerFactory.h>
#include <scapix/java_api/javax/activation/DataSource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::activation::DataHandler : public jni::object_base<"javax/activation/DataHandler",
	java::lang::Object,
	java::awt::datatransfer::Transferable>
{
public:

	static jni::ref<javax::activation::DataHandler> new_object(jni::ref<javax::activation::DataSource> p1) { return base_::new_object(p1); }
	static jni::ref<javax::activation::DataHandler> new_object(jni::ref<java::lang::Object> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::activation::DataHandler> new_object(jni::ref<java::net::URL> p1) { return base_::new_object(p1); }
	jni::ref<javax::activation::DataSource> getDataSource() { return call_method<"getDataSource", jni::ref<javax::activation::DataSource>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getContentType() { return call_method<"getContentType", jni::ref<java::lang::String>>(); }
	jni::ref<java::io::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<java::io::InputStream>>(); }
	void writeTo(jni::ref<java::io::OutputStream> p1) { return call_method<"writeTo", void>(p1); }
	jni::ref<java::io::OutputStream> getOutputStream() { return call_method<"getOutputStream", jni::ref<java::io::OutputStream>>(); }
	jni::ref<jni::array<java::awt::datatransfer::DataFlavor>> getTransferDataFlavors() { return call_method<"getTransferDataFlavors", jni::ref<jni::array<java::awt::datatransfer::DataFlavor>>>(); }
	jboolean isDataFlavorSupported(jni::ref<java::awt::datatransfer::DataFlavor> p1) { return call_method<"isDataFlavorSupported", jboolean>(p1); }
	jni::ref<java::lang::Object> getTransferData(jni::ref<java::awt::datatransfer::DataFlavor> p1) { return call_method<"getTransferData", jni::ref<java::lang::Object>>(p1); }
	void setCommandMap(jni::ref<javax::activation::CommandMap> p1) { return call_method<"setCommandMap", void>(p1); }
	jni::ref<jni::array<javax::activation::CommandInfo>> getPreferredCommands() { return call_method<"getPreferredCommands", jni::ref<jni::array<javax::activation::CommandInfo>>>(); }
	jni::ref<jni::array<javax::activation::CommandInfo>> getAllCommands() { return call_method<"getAllCommands", jni::ref<jni::array<javax::activation::CommandInfo>>>(); }
	jni::ref<javax::activation::CommandInfo> getCommand(jni::ref<java::lang::String> p1) { return call_method<"getCommand", jni::ref<javax::activation::CommandInfo>>(p1); }
	jni::ref<java::lang::Object> getContent() { return call_method<"getContent", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::Object> getBean(jni::ref<javax::activation::CommandInfo> p1) { return call_method<"getBean", jni::ref<java::lang::Object>>(p1); }
	static void setDataContentHandlerFactory(jni::ref<javax::activation::DataContentHandlerFactory> p1) { return call_static_method<"setDataContentHandlerFactory", void>(p1); }

protected:

	DataHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATAHANDLER