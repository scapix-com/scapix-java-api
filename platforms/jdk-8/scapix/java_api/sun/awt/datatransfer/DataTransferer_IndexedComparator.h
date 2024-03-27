// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_INDEXEDCOMPARATOR_FWD
#define SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_INDEXEDCOMPARATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::datatransfer { class DataTransferer_IndexedComparator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::datatransfer::DataTransferer_IndexedComparator>
{
	static constexpr fixed_string class_name = "sun/awt/datatransfer/DataTransferer$IndexedComparator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Comparator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_INDEXEDCOMPARATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_INDEXEDCOMPARATOR)
#define SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_INDEXEDCOMPARATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::datatransfer::DataTransferer_IndexedComparator : public jni::object_base<"sun/awt/datatransfer/DataTransferer$IndexedComparator",
	java::lang::Object,
	java::util::Comparator>
{
public:

	static jboolean SELECT_BEST() { return get_static_field<"SELECT_BEST", jboolean>(); }
	static jboolean SELECT_WORST() { return get_static_field<"SELECT_WORST", jboolean>(); }

	static jni::ref<sun::awt::datatransfer::DataTransferer_IndexedComparator> new_object() { return base_::new_object(); }
	static jni::ref<sun::awt::datatransfer::DataTransferer_IndexedComparator> new_object(jboolean p1) { return base_::new_object(p1); }

protected:

	DataTransferer_IndexedComparator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_DATATRANSFER_DATATRANSFERER_INDEXEDCOMPARATOR
