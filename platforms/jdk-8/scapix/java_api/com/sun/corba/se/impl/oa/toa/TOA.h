// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/oa/ObjectAdapter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_TOA_TOA_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_TOA_TOA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::oa::toa { class TOA; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::oa::toa::TOA>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/oa/toa/TOA";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::oa::ObjectAdapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_TOA_TOA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_TOA_TOA)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_TOA_TOA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::oa::toa::TOA : public jni::object_base<"com/sun/corba/se/impl/oa/toa/TOA",
	java::lang::Object,
	com::sun::corba::se::spi::oa::ObjectAdapter>
{
public:

	void connect(jni::ref<org::omg::CORBA::Object> p1) { return call_method<"connect", void>(p1); }
	void disconnect(jni::ref<org::omg::CORBA::Object> p1) { return call_method<"disconnect", void>(p1); }

protected:

	TOA(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_TOA_TOA
