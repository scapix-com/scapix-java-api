// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/Identifiable.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/WriteContents.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/MakeImmutable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDPROFILETEMPLATE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDPROFILETEMPLATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::ior { class TaggedProfileTemplate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::ior::TaggedProfileTemplate>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/ior/TaggedProfileTemplate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::List, scapix::java_api::com::sun::corba::se::spi::ior::Identifiable, scapix::java_api::com::sun::corba::se::spi::ior::WriteContents, scapix::java_api::com::sun::corba::se::spi::ior::MakeImmutable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDPROFILETEMPLATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDPROFILETEMPLATE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDPROFILETEMPLATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectId.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKeyTemplate.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/TaggedProfile.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/OutputStream.h>
#include <scapix/java_api/org/omg/IOP/TaggedComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::ior::TaggedProfileTemplate : public jni::object_base<"com/sun/corba/se/spi/ior/TaggedProfileTemplate",
	java::lang::Object,
	java::util::List,
	com::sun::corba::se::spi::ior::Identifiable,
	com::sun::corba::se::spi::ior::WriteContents,
	com::sun::corba::se::spi::ior::MakeImmutable>
{
public:

	jni::ref<java::util::Iterator> iteratorById(jint p1) { return call_method<"iteratorById", jni::ref<java::util::Iterator>>(p1); }
	jni::ref<com::sun::corba::se::spi::ior::TaggedProfile> create(jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate> p1, jni::ref<com::sun::corba::se::spi::ior::ObjectId> p2) { return call_method<"create", jni::ref<com::sun::corba::se::spi::ior::TaggedProfile>>(p1, p2); }
	void write(jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate> p1, jni::ref<com::sun::corba::se::spi::ior::ObjectId> p2, jni::ref<org::omg::CORBA_2_3::portable::OutputStream> p3) { return call_method<"write", void>(p1, p2, p3); }
	jboolean isEquivalent(jni::ref<com::sun::corba::se::spi::ior::TaggedProfileTemplate> p1) { return call_method<"isEquivalent", jboolean>(p1); }
	jni::ref<jni::array<org::omg::IOP::TaggedComponent>> getIOPComponents(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jint p2) { return call_method<"getIOPComponents", jni::ref<jni::array<org::omg::IOP::TaggedComponent>>>(p1, p2); }

protected:

	TaggedProfileTemplate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDPROFILETEMPLATE