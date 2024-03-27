// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/datatransfer/DataTransferer_IndexedComparator.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_INDEXORDERCOMPARATOR_FWD
#define SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_INDEXORDERCOMPARATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::datatransfer { class DataTransferer_IndexOrderComparator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::datatransfer::DataTransferer_IndexOrderComparator>
{
	static constexpr fixed_string class_name = "sun/awt/datatransfer/DataTransferer$IndexOrderComparator";
	using base_classes = std::tuple<scapix::java_api::sun::awt::datatransfer::DataTransferer_IndexedComparator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_INDEXORDERCOMPARATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_INDEXORDERCOMPARATOR)
#define SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_INDEXORDERCOMPARATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::datatransfer::DataTransferer_IndexOrderComparator : public jni::object_base<"sun/awt/datatransfer/DataTransferer$IndexOrderComparator",
	sun::awt::datatransfer::DataTransferer_IndexedComparator>
{
public:

	static jni::ref<sun::awt::datatransfer::DataTransferer_IndexOrderComparator> new_object(jni::ref<java::util::Map> p1) { return base_::new_object(p1); }
	static jni::ref<sun::awt::datatransfer::DataTransferer_IndexOrderComparator> new_object(jni::ref<java::util::Map> p1, jboolean p2) { return base_::new_object(p1, p2); }
	jint compare(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"compare", jint>(p1, p2); }

protected:

	DataTransferer_IndexOrderComparator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_INDEXORDERCOMPARATOR