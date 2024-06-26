// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/Identifiable.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/MakeImmutable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDPROFILE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDPROFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::ior { class TaggedProfile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::ior::TaggedProfile>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/ior/TaggedProfile";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::ior::Identifiable, scapix::java_api::com::sun::corba::se::spi::ior::MakeImmutable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDPROFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDPROFILE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDPROFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectId.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKey.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKeyTemplate.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/TaggedProfileTemplate.h>
#include <scapix/java_api/org/omg/IOP/TaggedProfile.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::ior::TaggedProfile : public jni::object_base<"com/sun/corba/se/spi/ior/TaggedProfile",
	java::lang::Object,
	com::sun::corba::se::spi::ior::Identifiable,
	com::sun::corba::se::spi::ior::MakeImmutable>
{
public:

	jni::ref<com::sun::corba::se::spi::ior::TaggedProfileTemplate> getTaggedProfileTemplate() { return call_method<"getTaggedProfileTemplate", jni::ref<com::sun::corba::se::spi::ior::TaggedProfileTemplate>>(); }
	jni::ref<com::sun::corba::se::spi::ior::ObjectId> getObjectId() { return call_method<"getObjectId", jni::ref<com::sun::corba::se::spi::ior::ObjectId>>(); }
	jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate> getObjectKeyTemplate() { return call_method<"getObjectKeyTemplate", jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate>>(); }
	jni::ref<com::sun::corba::se::spi::ior::ObjectKey> getObjectKey() { return call_method<"getObjectKey", jni::ref<com::sun::corba::se::spi::ior::ObjectKey>>(); }
	jboolean isEquivalent(jni::ref<com::sun::corba::se::spi::ior::TaggedProfile> p1) { return call_method<"isEquivalent", jboolean>(p1); }
	jni::ref<org::omg::IOP::TaggedProfile> getIOPProfile() { return call_method<"getIOPProfile", jni::ref<org::omg::IOP::TaggedProfile>>(); }
	jboolean isLocal() { return call_method<"isLocal", jboolean>(); }

protected:

	TaggedProfile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDPROFILE
