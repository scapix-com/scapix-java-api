// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERWRITECOLLECT_BUFFERMANAGERWRITECOLLECTITERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERWRITECOLLECT_BUFFERMANAGERWRITECOLLECTITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::encoding { class BufferManagerWriteCollect_BufferManagerWriteCollectIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::encoding::BufferManagerWriteCollect_BufferManagerWriteCollectIterator>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/encoding/BufferManagerWriteCollect$BufferManagerWriteCollectIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERWRITECOLLECT_BUFFERMANAGERWRITECOLLECTITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERWRITECOLLECT_BUFFERMANAGERWRITECOLLECTITERATOR)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERWRITECOLLECT_BUFFERMANAGERWRITECOLLECTITERATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::corba::se::impl::encoding::BufferManagerWriteCollect_BufferManagerWriteCollectIterator : public jni::object_base<"com/sun/corba/se/impl/encoding/BufferManagerWriteCollect$BufferManagerWriteCollectIterator",
	java::lang::Object,
	java::util::Iterator>
{
public:

	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<java::lang::Object> next() { return call_method<"next", jni::ref<java::lang::Object>>(); }
	void remove() { return call_method<"remove", void>(); }

protected:

	BufferManagerWriteCollect_BufferManagerWriteCollectIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ENCODING_BUFFERMANAGERWRITECOLLECT_BUFFERMANAGERWRITECOLLECTITERATOR
