// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::orb { class ParserTable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::orb::ParserTable>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/orb/ParserTable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orb/ParserData.h>
#include <scapix/java_api/com/sun/corba/se/impl/orb/ParserTable_TestBadServerIdHandler.h>
#include <scapix/java_api/com/sun/corba/se/impl/orb/ParserTable_TestLegacyORBSocketFactory.h>
#include <scapix/java_api/com/sun/corba/se/impl/orb/ParserTable_TestORBSocketFactory.h>
#include <scapix/java_api/com/sun/corba/se/impl/orb/ParserTable_TestIORToSocketInfo.h>
#include <scapix/java_api/com/sun/corba/se/impl/orb/ParserTable_TestIIOPPrimaryToContactInfo.h>
#include <scapix/java_api/com/sun/corba/se/impl/orb/ParserTable_TestContactInfoListFactory.h>
#include <scapix/java_api/com/sun/corba/se/impl/orb/ParserTable_TestORBInitializer1.h>
#include <scapix/java_api/com/sun/corba/se/impl/orb/ParserTable_TestORBInitializer2.h>
#include <scapix/java_api/com/sun/corba/se/impl/orb/ParserTable_TestAcceptor1.h>
#include <scapix/java_api/com/sun/corba/se/impl/orb/ParserTable_TestAcceptor2.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::orb::ParserTable : public jni::object_base<"com/sun/corba/se/impl/orb/ParserTable",
	java::lang::Object>
{
public:

	using TestBadServerIdHandler = ParserTable_TestBadServerIdHandler;
	using TestLegacyORBSocketFactory = ParserTable_TestLegacyORBSocketFactory;
	using TestORBSocketFactory = ParserTable_TestORBSocketFactory;
	using TestIORToSocketInfo = ParserTable_TestIORToSocketInfo;
	using TestIIOPPrimaryToContactInfo = ParserTable_TestIIOPPrimaryToContactInfo;
	using TestContactInfoListFactory = ParserTable_TestContactInfoListFactory;
	using TestORBInitializer1 = ParserTable_TestORBInitializer1;
	using TestORBInitializer2 = ParserTable_TestORBInitializer2;
	using TestAcceptor1 = ParserTable_TestAcceptor1;
	using TestAcceptor2 = ParserTable_TestAcceptor2;

	static jni::ref<com::sun::corba::se::impl::orb::ParserTable> get() { return call_static_method<"get", jni::ref<com::sun::corba::se::impl::orb::ParserTable>>(); }
	jni::ref<jni::array<com::sun::corba::se::spi::orb::ParserData>> getParserData() { return call_method<"getParserData", jni::ref<jni::array<com::sun::corba::se::spi::orb::ParserData>>>(); }

protected:

	ParserTable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORB_PARSERTABLE
