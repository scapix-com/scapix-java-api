// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PARSERDATAFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PARSERDATAFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orb { class ParserDataFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orb::ParserDataFactory>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orb/ParserDataFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PARSERDATAFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PARSERDATAFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PARSERDATAFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orb/Operation.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ParserData.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/StringPair.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::orb::ParserDataFactory : public jni::object_base<"com/sun/corba/se/spi/orb/ParserDataFactory",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::spi::orb::ParserDataFactory> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::corba::se::spi::orb::ParserData> make(jni::ref<java::lang::String> p1, jni::ref<com::sun::corba::se::spi::orb::Operation> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::Object> p4, jni::ref<java::lang::Object> p5, jni::ref<java::lang::String> p6) { return call_static_method<"make", jni::ref<com::sun::corba::se::spi::orb::ParserData>>(p1, p2, p3, p4, p5, p6); }
	static jni::ref<com::sun::corba::se::spi::orb::ParserData> make(jni::ref<java::lang::String> p1, jni::ref<com::sun::corba::se::spi::orb::Operation> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::Object> p4, jni::ref<java::lang::Object> p5, jni::ref<jni::array<com::sun::corba::se::spi::orb::StringPair>> p6, jni::ref<java::lang::Class> p7) { return call_static_method<"make", jni::ref<com::sun::corba::se::spi::orb::ParserData>>(p1, p2, p3, p4, p5, p6, p7); }

protected:

	ParserDataFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PARSERDATAFACTORY
