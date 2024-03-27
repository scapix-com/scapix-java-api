// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/CorbaContactInfoListFactory.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_TESTCONTACTINFOLISTFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_TESTCONTACTINFOLISTFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::orb { class ParserTable_TestContactInfoListFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::orb::ParserTable_TestContactInfoListFactory>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/orb/ParserTable$TestContactInfoListFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::transport::CorbaContactInfoListFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_TESTCONTACTINFOLISTFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_TESTCONTACTINFOLISTFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_TESTCONTACTINFOLISTFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/IOR.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/com/sun/corba/se/spi/transport/CorbaContactInfoList.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::orb::ParserTable_TestContactInfoListFactory : public jni::object_base<"com/sun/corba/se/impl/orb/ParserTable$TestContactInfoListFactory",
	java::lang::Object,
	com::sun::corba::se::spi::transport::CorbaContactInfoListFactory>
{
public:

	static jni::ref<com::sun::corba::se::impl::orb::ParserTable_TestContactInfoListFactory> new_object() { return base_::new_object(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void setORB(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_method<"setORB", void>(p1); }
	jni::ref<com::sun::corba::se::spi::transport::CorbaContactInfoList> create(jni::ref<com::sun::corba::se::spi::ior::IOR> p1) { return call_method<"create", jni::ref<com::sun::corba::se::spi::transport::CorbaContactInfoList>>(p1); }

protected:

	ParserTable_TestContactInfoListFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_TESTCONTACTINFOLISTFACTORY
