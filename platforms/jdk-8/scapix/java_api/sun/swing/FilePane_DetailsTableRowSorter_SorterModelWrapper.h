// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/DefaultRowSorter_ModelWrapper.h>

#ifndef SCAPIX_JAVA_API_SUN_SWING_FILEPANE_DETAILSTABLEROWSORTER_SORTERMODELWRAPPER_FWD
#define SCAPIX_JAVA_API_SUN_SWING_FILEPANE_DETAILSTABLEROWSORTER_SORTERMODELWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::swing { class FilePane_DetailsTableRowSorter_SorterModelWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::swing::FilePane_DetailsTableRowSorter_SorterModelWrapper>
{
	static constexpr fixed_string class_name = "sun/swing/FilePane$DetailsTableRowSorter$SorterModelWrapper";
	using base_classes = std::tuple<scapix::java_api::javax::swing::DefaultRowSorter_ModelWrapper>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_FILEPANE_DETAILSTABLEROWSORTER_SORTERMODELWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SWING_FILEPANE_DETAILSTABLEROWSORTER_SORTERMODELWRAPPER)
#define SCAPIX_JAVA_API_SUN_SWING_FILEPANE_DETAILSTABLEROWSORTER_SORTERMODELWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/table/TableModel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::swing::FilePane_DetailsTableRowSorter_SorterModelWrapper : public jni::object_base<"sun/swing/FilePane$DetailsTableRowSorter$SorterModelWrapper",
	javax::swing::DefaultRowSorter_ModelWrapper>
{
public:

	jni::ref<javax::swing::table::TableModel> getModel() { return call_method<"getModel", jni::ref<javax::swing::table::TableModel>>(); }
	jint getColumnCount() { return call_method<"getColumnCount", jint>(); }
	jint getRowCount() { return call_method<"getRowCount", jint>(); }
	jni::ref<java::lang::Object> getValueAt(jint p1, jint p2) { return call_method<"getValueAt", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Integer> getIdentifier(jint p1) { return call_method<"getIdentifier", jni::ref<java::lang::Integer>>(p1); }

protected:

	FilePane_DetailsTableRowSorter_SorterModelWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_FILEPANE_DETAILSTABLEROWSORTER_SORTERMODELWRAPPER
