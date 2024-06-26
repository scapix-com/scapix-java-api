// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/activation/DataSource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATAHANDLERDATASOURCE_FWD
#define SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATAHANDLERDATASOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::activation { class DataHandlerDataSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::activation::DataHandlerDataSource>
{
	static constexpr fixed_string class_name = "javax/activation/DataHandlerDataSource";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::activation::DataSource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATAHANDLERDATASOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATAHANDLERDATASOURCE)
#define SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATAHANDLERDATASOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/activation/DataHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::activation::DataHandlerDataSource : public jni::object_base<"javax/activation/DataHandlerDataSource",
	java::lang::Object,
	javax::activation::DataSource>
{
public:

	static jni::ref<javax::activation::DataHandlerDataSource> new_object(jni::ref<javax::activation::DataHandler> p1) { return base_::new_object(p1); }
	jni::ref<java::io::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::io::OutputStream> getOutputStream() { return call_method<"getOutputStream", jni::ref<java::io::OutputStream>>(); }
	jni::ref<java::lang::String> getContentType() { return call_method<"getContentType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }

protected:

	DataHandlerDataSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACTIVATION_DATAHANDLERDATASOURCE
