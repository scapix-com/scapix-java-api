// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/naming/spi/ObjectFactory.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_SPI_DIROBJECTFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_SPI_DIROBJECTFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming::spi { class DirObjectFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::spi::DirObjectFactory>
{
	static constexpr fixed_string class_name = "javax/naming/spi/DirObjectFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::naming::spi::ObjectFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_SPI_DIROBJECTFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_SPI_DIROBJECTFACTORY)
#define SCAPIX_JAVA_API_JAVAX_NAMING_SPI_DIROBJECTFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Hashtable.h>
#include <scapix/java_api/javax/naming/Context.h>
#include <scapix/java_api/javax/naming/Name.h>
#include <scapix/java_api/javax/naming/directory/Attributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::spi::DirObjectFactory : public jni::object_base<"javax/naming/spi/DirObjectFactory",
	java::lang::Object,
	javax::naming::spi::ObjectFactory>
{
public:

	jni::ref<java::lang::Object> getObjectInstance(jni::ref<java::lang::Object> p1, jni::ref<javax::naming::Name> p2, jni::ref<javax::naming::Context> p3, jni::ref<java::util::Hashtable> p4, jni::ref<javax::naming::directory::Attributes> p5) { return call_method<"getObjectInstance", jni::ref<java::lang::Object>>(p1, p2, p3, p4, p5); }

protected:

	DirObjectFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_SPI_DIROBJECTFACTORY
