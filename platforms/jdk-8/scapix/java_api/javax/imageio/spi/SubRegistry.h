// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_SUBREGISTRY_FWD
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_SUBREGISTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::imageio::spi { class SubRegistry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::imageio::spi::SubRegistry>
{
	static constexpr fixed_string class_name = "javax/imageio/spi/SubRegistry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_SUBREGISTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_SUBREGISTRY)
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_SUBREGISTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/javax/imageio/spi/ServiceRegistry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::imageio::spi::SubRegistry : public jni::object_base<"javax/imageio/spi/SubRegistry",
	java::lang::Object>
{
public:

	static jni::ref<javax::imageio::spi::SubRegistry> new_object(jni::ref<javax::imageio::spi::ServiceRegistry> p1, jni::ref<java::lang::Class> p2) { return base_::new_object(p1, p2); }
	jboolean registerServiceProvider(jni::ref<java::lang::Object> p1) { return call_method<"registerServiceProvider", jboolean>(p1); }
	jboolean deregisterServiceProvider(jni::ref<java::lang::Object> p1) { return call_method<"deregisterServiceProvider", jboolean>(p1); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jboolean setOrdering(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"setOrdering", jboolean>(p1, p2); }
	jboolean unsetOrdering(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"unsetOrdering", jboolean>(p1, p2); }
	jni::ref<java::util::Iterator> getServiceProviders(jboolean p1) { return call_method<"getServiceProviders", jni::ref<java::util::Iterator>>(p1); }
	jni::ref<java::lang::Object> getServiceProviderByClass(jni::ref<java::lang::Class> p1) { return call_method<"getServiceProviderByClass", jni::ref<java::lang::Object>>(p1); }
	void clear() { return call_method<"clear", void>(); }
	void finalize() { return call_method<"finalize", void>(); }

protected:

	SubRegistry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_SUBREGISTRY
