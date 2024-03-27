// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_SPI_NAMINGMANAGER_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_SPI_NAMINGMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming::spi { class NamingManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::spi::NamingManager>
{
	static constexpr fixed_string class_name = "javax/naming/spi/NamingManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_SPI_NAMINGMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_SPI_NAMINGMANAGER)
#define SCAPIX_JAVA_API_JAVAX_NAMING_SPI_NAMINGMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Hashtable.h>
#include <scapix/java_api/javax/naming/CannotProceedException.h>
#include <scapix/java_api/javax/naming/Context.h>
#include <scapix/java_api/javax/naming/Name.h>
#include <scapix/java_api/javax/naming/spi/InitialContextFactoryBuilder.h>
#include <scapix/java_api/javax/naming/spi/ObjectFactoryBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::spi::NamingManager : public jni::object_base<"javax/naming/spi/NamingManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> CPE() { return get_static_field<"CPE", jni::ref<java::lang::String>>(); }

	static void setObjectFactoryBuilder(jni::ref<javax::naming::spi::ObjectFactoryBuilder> p1) { return call_static_method<"setObjectFactoryBuilder", void>(p1); }
	static jni::ref<java::lang::Object> getObjectInstance(jni::ref<java::lang::Object> p1, jni::ref<javax::naming::Name> p2, jni::ref<javax::naming::Context> p3, jni::ref<java::util::Hashtable> p4) { return call_static_method<"getObjectInstance", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }
	static jni::ref<javax::naming::Context> getURLContext(jni::ref<java::lang::String> p1, jni::ref<java::util::Hashtable> p2) { return call_static_method<"getURLContext", jni::ref<javax::naming::Context>>(p1, p2); }
	static jni::ref<javax::naming::Context> getInitialContext(jni::ref<java::util::Hashtable> p1) { return call_static_method<"getInitialContext", jni::ref<javax::naming::Context>>(p1); }
	static void setInitialContextFactoryBuilder(jni::ref<javax::naming::spi::InitialContextFactoryBuilder> p1) { return call_static_method<"setInitialContextFactoryBuilder", void>(p1); }
	static jboolean hasInitialContextFactoryBuilder() { return call_static_method<"hasInitialContextFactoryBuilder", jboolean>(); }
	static jni::ref<javax::naming::Context> getContinuationContext(jni::ref<javax::naming::CannotProceedException> p1) { return call_static_method<"getContinuationContext", jni::ref<javax::naming::Context>>(p1); }
	static jni::ref<java::lang::Object> getStateToBind(jni::ref<java::lang::Object> p1, jni::ref<javax::naming::Name> p2, jni::ref<javax::naming::Context> p3, jni::ref<java::util::Hashtable> p4) { return call_static_method<"getStateToBind", jni::ref<java::lang::Object>>(p1, p2, p3, p4); }

protected:

	NamingManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_SPI_NAMINGMANAGER
