// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PROPERTYPARSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PROPERTYPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orb { class PropertyParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orb::PropertyParser>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orb/PropertyParser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PROPERTYPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PROPERTYPARSER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PROPERTYPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orb/Operation.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/Properties.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::orb::PropertyParser : public jni::object_base<"com/sun/corba/se/spi/orb/PropertyParser",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::spi::orb::PropertyParser> new_object() { return base_::new_object(); }
	jni::ref<com::sun::corba::se::spi::orb::PropertyParser> add(jni::ref<java::lang::String> p1, jni::ref<com::sun::corba::se::spi::orb::Operation> p2, jni::ref<java::lang::String> p3) { return call_method<"add", jni::ref<com::sun::corba::se::spi::orb::PropertyParser>>(p1, p2, p3); }
	jni::ref<com::sun::corba::se::spi::orb::PropertyParser> addPrefix(jni::ref<java::lang::String> p1, jni::ref<com::sun::corba::se::spi::orb::Operation> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::Class> p4) { return call_method<"addPrefix", jni::ref<com::sun::corba::se::spi::orb::PropertyParser>>(p1, p2, p3, p4); }
	jni::ref<java::util::Map> parse(jni::ref<java::util::Properties> p1) { return call_method<"parse", jni::ref<java::util::Map>>(p1); }
	jni::ref<java::util::Iterator> iterator() { return call_method<"iterator", jni::ref<java::util::Iterator>>(); }

protected:

	PropertyParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PROPERTYPARSER
