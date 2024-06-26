// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_SERVICEREGISTRY_FILTER_FWD
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_SERVICEREGISTRY_FILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::imageio::spi { class ServiceRegistry_Filter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::imageio::spi::ServiceRegistry_Filter>
{
	static constexpr fixed_string class_name = "javax/imageio/spi/ServiceRegistry$Filter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_SERVICEREGISTRY_FILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_SERVICEREGISTRY_FILTER)
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_SERVICEREGISTRY_FILTER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::imageio::spi::ServiceRegistry_Filter : public jni::object_base<"javax/imageio/spi/ServiceRegistry$Filter",
	java::lang::Object>
{
public:

	jboolean filter(jni::ref<java::lang::Object> p1) { return call_method<"filter", jboolean>(p1); }

protected:

	ServiceRegistry_Filter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_SERVICEREGISTRY_FILTER
