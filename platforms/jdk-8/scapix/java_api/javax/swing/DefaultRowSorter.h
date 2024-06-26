// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/RowSorter.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTROWSORTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTROWSORTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class DefaultRowSorter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::DefaultRowSorter>
{
	static constexpr fixed_string class_name = "javax/swing/DefaultRowSorter";
	using base_classes = std::tuple<scapix::java_api::javax::swing::RowSorter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTROWSORTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTROWSORTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTROWSORTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/swing/RowFilter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::DefaultRowSorter : public jni::object_base<"javax/swing/DefaultRowSorter",
	javax::swing::RowSorter>
{
public:

	static jni::ref<javax::swing::DefaultRowSorter> new_object() { return base_::new_object(); }
	jni::ref<java::lang::Object> getModel() { return call_method<"getModel", jni::ref<java::lang::Object>>(); }
	void setSortable(jint p1, jboolean p2) { return call_method<"setSortable", void>(p1, p2); }
	jboolean isSortable(jint p1) { return call_method<"isSortable", jboolean>(p1); }
	void setSortKeys(jni::ref<java::util::List> p1) { return call_method<"setSortKeys", void>(p1); }
	jni::ref<java::util::List> getSortKeys() { return call_method<"getSortKeys", jni::ref<java::util::List>>(); }
	void setMaxSortKeys(jint p1) { return call_method<"setMaxSortKeys", void>(p1); }
	jint getMaxSortKeys() { return call_method<"getMaxSortKeys", jint>(); }
	void setSortsOnUpdates(jboolean p1) { return call_method<"setSortsOnUpdates", void>(p1); }
	jboolean getSortsOnUpdates() { return call_method<"getSortsOnUpdates", jboolean>(); }
	void setRowFilter(jni::ref<javax::swing::RowFilter> p1) { return call_method<"setRowFilter", void>(p1); }
	jni::ref<javax::swing::RowFilter> getRowFilter() { return call_method<"getRowFilter", jni::ref<javax::swing::RowFilter>>(); }
	void toggleSortOrder(jint p1) { return call_method<"toggleSortOrder", void>(p1); }
	jint convertRowIndexToView(jint p1) { return call_method<"convertRowIndexToView", jint>(p1); }
	jint convertRowIndexToModel(jint p1) { return call_method<"convertRowIndexToModel", jint>(p1); }
	void sort() { return call_method<"sort", void>(); }
	void setComparator(jint p1, jni::ref<java::util::Comparator> p2) { return call_method<"setComparator", void>(p1, p2); }
	jni::ref<java::util::Comparator> getComparator(jint p1) { return call_method<"getComparator", jni::ref<java::util::Comparator>>(p1); }
	jint getViewRowCount() { return call_method<"getViewRowCount", jint>(); }
	jint getModelRowCount() { return call_method<"getModelRowCount", jint>(); }
	void modelStructureChanged() { return call_method<"modelStructureChanged", void>(); }
	void allRowsChanged() { return call_method<"allRowsChanged", void>(); }
	void rowsInserted(jint p1, jint p2) { return call_method<"rowsInserted", void>(p1, p2); }
	void rowsDeleted(jint p1, jint p2) { return call_method<"rowsDeleted", void>(p1, p2); }
	void rowsUpdated(jint p1, jint p2) { return call_method<"rowsUpdated", void>(p1, p2); }
	void rowsUpdated(jint p1, jint p2, jint p3) { return call_method<"rowsUpdated", void>(p1, p2, p3); }

protected:

	DefaultRowSorter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTROWSORTER
