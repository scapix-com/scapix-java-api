// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PARSERIMPLTABLEBASE_FIELDMAP_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PARSERIMPLTABLEBASE_FIELDMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orb { class ParserImplTableBase_FieldMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orb::ParserImplTableBase_FieldMap>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orb/ParserImplTableBase$FieldMap";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PARSERIMPLTABLEBASE_FIELDMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PARSERIMPLTABLEBASE_FIELDMAP)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PARSERIMPLTABLEBASE_FIELDMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orb/ParserData.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::spi::orb::ParserImplTableBase_FieldMap : public jni::object_base<"com/sun/corba/se/spi/orb/ParserImplTableBase$FieldMap",
	java::util::AbstractMap>
{
public:

	static jni::ref<com::sun::corba::se::spi::orb::ParserImplTableBase_FieldMap> new_object(jni::ref<jni::array<com::sun::corba::se::spi::orb::ParserData>> p1, jboolean p2) { return base_::new_object(p1, p2); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }

protected:

	ParserImplTableBase_FieldMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORB_PARSERIMPLTABLEBASE_FIELDMAP
