// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/ior/GenericIdentifiable.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/TaggedProfile.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_GENERICTAGGEDPROFILE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_GENERICTAGGEDPROFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior { class GenericTaggedProfile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::GenericTaggedProfile>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/GenericTaggedProfile";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::ior::GenericIdentifiable, scapix::java_api::com::sun::corba::se::spi::ior::TaggedProfile>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_GENERICTAGGEDPROFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_GENERICTAGGEDPROFILE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_GENERICTAGGEDPROFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectId.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKey.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKeyTemplate.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/TaggedProfileTemplate.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/InputStream.h>
#include <scapix/java_api/org/omg/IOP/TaggedProfile.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::ior::GenericTaggedProfile : public jni::object_base<"com/sun/corba/se/impl/ior/GenericTaggedProfile",
	com::sun::corba::se::impl::ior::GenericIdentifiable,
	com::sun::corba::se::spi::ior::TaggedProfile>
{
public:

	static jni::ref<com::sun::corba::se::impl::ior::GenericTaggedProfile> new_object(jint p1, jni::ref<org::omg::CORBA_2_3::portable::InputStream> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::corba::se::impl::ior::GenericTaggedProfile> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jint p2, jni::ref<jni::array<jbyte>> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<com::sun::corba::se::spi::ior::TaggedProfileTemplate> getTaggedProfileTemplate() { return call_method<"getTaggedProfileTemplate", jni::ref<com::sun::corba::se::spi::ior::TaggedProfileTemplate>>(); }
	jni::ref<com::sun::corba::se::spi::ior::ObjectId> getObjectId() { return call_method<"getObjectId", jni::ref<com::sun::corba::se::spi::ior::ObjectId>>(); }
	jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate> getObjectKeyTemplate() { return call_method<"getObjectKeyTemplate", jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate>>(); }
	jni::ref<com::sun::corba::se::spi::ior::ObjectKey> getObjectKey() { return call_method<"getObjectKey", jni::ref<com::sun::corba::se::spi::ior::ObjectKey>>(); }
	jboolean isEquivalent(jni::ref<com::sun::corba::se::spi::ior::TaggedProfile> p1) { return call_method<"isEquivalent", jboolean>(p1); }
	void makeImmutable() { return call_method<"makeImmutable", void>(); }
	jboolean isLocal() { return call_method<"isLocal", jboolean>(); }
	jni::ref<org::omg::IOP::TaggedProfile> getIOPProfile() { return call_method<"getIOPProfile", jni::ref<org::omg::IOP::TaggedProfile>>(); }

protected:

	GenericTaggedProfile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_GENERICTAGGEDPROFILE
