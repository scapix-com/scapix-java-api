// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/encoding/CDRInputStream_1_0_StreamMemento.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTSTREAM_1_1_FRAGMENTABLESTREAMMEMENTO_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTSTREAM_1_1_FRAGMENTABLESTREAMMEMENTO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::encoding { class CDRInputStream_1_1_FragmentableStreamMemento; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::encoding::CDRInputStream_1_1_FragmentableStreamMemento>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/encoding/CDRInputStream_1_1$FragmentableStreamMemento";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::encoding::CDRInputStream_1_0_StreamMemento>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTSTREAM_1_1_FRAGMENTABLESTREAMMEMENTO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTSTREAM_1_1_FRAGMENTABLESTREAMMEMENTO)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTSTREAM_1_1_FRAGMENTABLESTREAMMEMENTO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/encoding/CDRInputStream_1_1.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::encoding::CDRInputStream_1_1_FragmentableStreamMemento : public jni::object_base<"com/sun/corba/se/impl/encoding/CDRInputStream_1_1$FragmentableStreamMemento",
	com::sun::corba::se::impl::encoding::CDRInputStream_1_0_StreamMemento>
{
public:

	static jni::ref<com::sun::corba::se::impl::encoding::CDRInputStream_1_1_FragmentableStreamMemento> new_object(jni::ref<com::sun::corba::se::impl::encoding::CDRInputStream_1_1> p1) { return base_::new_object(p1); }

protected:

	CDRInputStream_1_1_FragmentableStreamMemento(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_CDRINPUTSTREAM_1_1_FRAGMENTABLESTREAMMEMENTO