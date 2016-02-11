/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkSelectionAlgorithmWrap.h"
#include "vtkConvertSelectionWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkStringArrayWrap.h"
#include "vtkExtractSelectionWrap.h"
#include "vtkSelectionWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkIdTypeArrayWrap.h"
#include "vtkGraphWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkTableWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkConvertSelectionWrap::ptpl;

VtkConvertSelectionWrap::VtkConvertSelectionWrap()
{ }

VtkConvertSelectionWrap::VtkConvertSelectionWrap(vtkSmartPointer<vtkConvertSelection> _native)
{ native = _native; }

VtkConvertSelectionWrap::~VtkConvertSelectionWrap()
{ }

void VtkConvertSelectionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkConvertSelection").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ConvertSelection").ToLocalChecked(), ConstructorGetter);
}

void VtkConvertSelectionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkConvertSelectionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkSelectionAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkSelectionAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkConvertSelectionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddArrayName", AddArrayName);
	Nan::SetPrototypeMethod(tpl, "addArrayName", AddArrayName);

	Nan::SetPrototypeMethod(tpl, "ClearArrayNames", ClearArrayNames);
	Nan::SetPrototypeMethod(tpl, "clearArrayNames", ClearArrayNames);

	Nan::SetPrototypeMethod(tpl, "GetArrayName", GetArrayName);
	Nan::SetPrototypeMethod(tpl, "getArrayName", GetArrayName);

	Nan::SetPrototypeMethod(tpl, "GetArrayNames", GetArrayNames);
	Nan::SetPrototypeMethod(tpl, "getArrayNames", GetArrayNames);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInputFieldType", GetInputFieldType);
	Nan::SetPrototypeMethod(tpl, "getInputFieldType", GetInputFieldType);

	Nan::SetPrototypeMethod(tpl, "GetMatchAnyValues", GetMatchAnyValues);
	Nan::SetPrototypeMethod(tpl, "getMatchAnyValues", GetMatchAnyValues);

	Nan::SetPrototypeMethod(tpl, "GetOutputType", GetOutputType);
	Nan::SetPrototypeMethod(tpl, "getOutputType", GetOutputType);

	Nan::SetPrototypeMethod(tpl, "GetSelectedCells", GetSelectedCells);
	Nan::SetPrototypeMethod(tpl, "getSelectedCells", GetSelectedCells);

	Nan::SetPrototypeMethod(tpl, "GetSelectedEdges", GetSelectedEdges);
	Nan::SetPrototypeMethod(tpl, "getSelectedEdges", GetSelectedEdges);

	Nan::SetPrototypeMethod(tpl, "GetSelectedItems", GetSelectedItems);
	Nan::SetPrototypeMethod(tpl, "getSelectedItems", GetSelectedItems);

	Nan::SetPrototypeMethod(tpl, "GetSelectedPoints", GetSelectedPoints);
	Nan::SetPrototypeMethod(tpl, "getSelectedPoints", GetSelectedPoints);

	Nan::SetPrototypeMethod(tpl, "GetSelectedRows", GetSelectedRows);
	Nan::SetPrototypeMethod(tpl, "getSelectedRows", GetSelectedRows);

	Nan::SetPrototypeMethod(tpl, "GetSelectedVertices", GetSelectedVertices);
	Nan::SetPrototypeMethod(tpl, "getSelectedVertices", GetSelectedVertices);

	Nan::SetPrototypeMethod(tpl, "GetSelectionExtractor", GetSelectionExtractor);
	Nan::SetPrototypeMethod(tpl, "getSelectionExtractor", GetSelectionExtractor);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MatchAnyValuesOff", MatchAnyValuesOff);
	Nan::SetPrototypeMethod(tpl, "matchAnyValuesOff", MatchAnyValuesOff);

	Nan::SetPrototypeMethod(tpl, "MatchAnyValuesOn", MatchAnyValuesOn);
	Nan::SetPrototypeMethod(tpl, "matchAnyValuesOn", MatchAnyValuesOn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetArrayName", SetArrayName);
	Nan::SetPrototypeMethod(tpl, "setArrayName", SetArrayName);

	Nan::SetPrototypeMethod(tpl, "SetArrayNames", SetArrayNames);
	Nan::SetPrototypeMethod(tpl, "setArrayNames", SetArrayNames);

	Nan::SetPrototypeMethod(tpl, "SetDataObjectConnection", SetDataObjectConnection);
	Nan::SetPrototypeMethod(tpl, "setDataObjectConnection", SetDataObjectConnection);

	Nan::SetPrototypeMethod(tpl, "SetInputFieldType", SetInputFieldType);
	Nan::SetPrototypeMethod(tpl, "setInputFieldType", SetInputFieldType);

	Nan::SetPrototypeMethod(tpl, "SetMatchAnyValues", SetMatchAnyValues);
	Nan::SetPrototypeMethod(tpl, "setMatchAnyValues", SetMatchAnyValues);

	Nan::SetPrototypeMethod(tpl, "SetOutputType", SetOutputType);
	Nan::SetPrototypeMethod(tpl, "setOutputType", SetOutputType);

	Nan::SetPrototypeMethod(tpl, "SetSelectionExtractor", SetSelectionExtractor);
	Nan::SetPrototypeMethod(tpl, "setSelectionExtractor", SetSelectionExtractor);

	Nan::SetPrototypeMethod(tpl, "ToGlobalIdSelection", ToGlobalIdSelection);
	Nan::SetPrototypeMethod(tpl, "toGlobalIdSelection", ToGlobalIdSelection);

	Nan::SetPrototypeMethod(tpl, "ToIndexSelection", ToIndexSelection);
	Nan::SetPrototypeMethod(tpl, "toIndexSelection", ToIndexSelection);

	Nan::SetPrototypeMethod(tpl, "ToPedigreeIdSelection", ToPedigreeIdSelection);
	Nan::SetPrototypeMethod(tpl, "toPedigreeIdSelection", ToPedigreeIdSelection);

	Nan::SetPrototypeMethod(tpl, "ToSelectionType", ToSelectionType);
	Nan::SetPrototypeMethod(tpl, "toSelectionType", ToSelectionType);

	Nan::SetPrototypeMethod(tpl, "ToValueSelection", ToValueSelection);
	Nan::SetPrototypeMethod(tpl, "toValueSelection", ToValueSelection);

	ptpl.Reset( tpl );
}

void VtkConvertSelectionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkConvertSelection> native = vtkSmartPointer<vtkConvertSelection>::New();
		VtkConvertSelectionWrap* obj = new VtkConvertSelectionWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkConvertSelectionWrap::AddArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::ClearArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ClearArrayNames();
}

void VtkConvertSelectionWrap::GetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkConvertSelectionWrap::GetArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayNames();
	VtkStringArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStringArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConvertSelectionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkConvertSelectionWrap::GetInputFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInputFieldType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvertSelectionWrap::GetMatchAnyValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMatchAnyValues();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvertSelectionWrap::GetOutputType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkConvertSelectionWrap::GetSelectedCells(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataSetWrap *a1 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdTypeArrayWrap *a2 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GetSelectedCells(
					(vtkSelection *) a0->native.GetPointer(),
					(vtkDataSet *) a1->native.GetPointer(),
					(vtkIdTypeArray *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::GetSelectedEdges(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkGraphWrap::ptpl))->HasInstance(info[1]))
		{
			VtkGraphWrap *a1 = ObjectWrap::Unwrap<VtkGraphWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdTypeArrayWrap *a2 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GetSelectedEdges(
					(vtkSelection *) a0->native.GetPointer(),
					(vtkGraph *) a1->native.GetPointer(),
					(vtkIdTypeArray *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::GetSelectedItems(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkIdTypeArrayWrap *a3 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[3]->ToObject());
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->GetSelectedItems(
						(vtkSelection *) a0->native.GetPointer(),
						(vtkDataObject *) a1->native.GetPointer(),
						info[2]->Int32Value(),
						(vtkIdTypeArray *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::GetSelectedPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataSetWrap *a1 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdTypeArrayWrap *a2 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GetSelectedPoints(
					(vtkSelection *) a0->native.GetPointer(),
					(vtkDataSet *) a1->native.GetPointer(),
					(vtkIdTypeArray *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::GetSelectedRows(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkTableWrap::ptpl))->HasInstance(info[1]))
		{
			VtkTableWrap *a1 = ObjectWrap::Unwrap<VtkTableWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdTypeArrayWrap *a2 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GetSelectedRows(
					(vtkSelection *) a0->native.GetPointer(),
					(vtkTable *) a1->native.GetPointer(),
					(vtkIdTypeArray *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::GetSelectedVertices(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkGraphWrap::ptpl))->HasInstance(info[1]))
		{
			VtkGraphWrap *a1 = ObjectWrap::Unwrap<VtkGraphWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkIdTypeArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkIdTypeArrayWrap *a2 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GetSelectedVertices(
					(vtkSelection *) a0->native.GetPointer(),
					(vtkGraph *) a1->native.GetPointer(),
					(vtkIdTypeArray *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::GetSelectionExtractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	vtkExtractSelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSelectionExtractor();
	VtkExtractSelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkExtractSelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExtractSelectionWrap *w = new VtkExtractSelectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConvertSelectionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::MatchAnyValuesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MatchAnyValuesOff();
}

void VtkConvertSelectionWrap::MatchAnyValuesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->MatchAnyValuesOn();
}

void VtkConvertSelectionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	vtkConvertSelection * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkConvertSelectionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkConvertSelectionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkConvertSelectionWrap *w = new VtkConvertSelectionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkConvertSelectionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkConvertSelection * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkConvertSelectionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkConvertSelectionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkConvertSelectionWrap *w = new VtkConvertSelectionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::SetArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::SetArrayNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkStringArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkStringArrayWrap *a0 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArrayNames(
			(vtkStringArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::SetDataObjectConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAlgorithmOutputWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataObjectConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::SetInputFieldType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputFieldType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::SetMatchAnyValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMatchAnyValues(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::SetOutputType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::SetSelectionExtractor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkExtractSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkExtractSelectionWrap *a0 = ObjectWrap::Unwrap<VtkExtractSelectionWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSelectionExtractor(
			(vtkExtractSelection *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::ToGlobalIdSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
			vtkSelection * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->ToGlobalIdSelection(
				(vtkSelection *) a0->native.GetPointer(),
				(vtkDataObject *) a1->native.GetPointer()
			);
			VtkSelectionWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkSelectionWrap *w = new VtkSelectionWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::ToIndexSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
			vtkSelection * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->ToIndexSelection(
				(vtkSelection *) a0->native.GetPointer(),
				(vtkDataObject *) a1->native.GetPointer()
			);
			VtkSelectionWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkSelectionWrap *w = new VtkSelectionWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::ToPedigreeIdSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
			vtkSelection * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->ToPedigreeIdSelection(
				(vtkSelection *) a0->native.GetPointer(),
				(vtkDataObject *) a1->native.GetPointer()
			);
			VtkSelectionWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkSelectionWrap *w = new VtkSelectionWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::ToSelectionType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkStringArrayWrap::ptpl))->HasInstance(info[3]))
				{
					VtkStringArrayWrap *a3 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[3]->ToObject());
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						vtkSelection * r;
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						r = native->ToSelectionType(
							(vtkSelection *) a0->native.GetPointer(),
							(vtkDataObject *) a1->native.GetPointer(),
							info[2]->Int32Value(),
							(vtkStringArray *) a3->native.GetPointer(),
							info[4]->Int32Value()
						);
						VtkSelectionWrap::InitPtpl();
						v8::Local<v8::Value> argv[1] =
							{ Nan::New(vtkNodeJsNoWrap) };
						v8::Local<v8::Function> cons =
							Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
						v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
						VtkSelectionWrap *w = new VtkSelectionWrap();
						w->native = r;
						w->Wrap(wo);
						info.GetReturnValue().Set(wo);
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkConvertSelectionWrap::ToValueSelection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkConvertSelectionWrap *wrapper = ObjectWrap::Unwrap<VtkConvertSelectionWrap>(info.Holder());
	vtkConvertSelection *native = (vtkConvertSelection *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkSelectionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkSelectionWrap *a0 = ObjectWrap::Unwrap<VtkSelectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataObjectWrap *a1 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsString())
			{
				Nan::Utf8String a2(info[2]);
				vtkSelection * r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->ToValueSelection(
					(vtkSelection *) a0->native.GetPointer(),
					(vtkDataObject *) a1->native.GetPointer(),
					*a2
				);
				VtkSelectionWrap::InitPtpl();
				v8::Local<v8::Value> argv[1] =
					{ Nan::New(vtkNodeJsNoWrap) };
				v8::Local<v8::Function> cons =
					Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
				v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
				VtkSelectionWrap *w = new VtkSelectionWrap();
				w->native = r;
				w->Wrap(wo);
				info.GetReturnValue().Set(wo);
				return;
			}
			else if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkStringArrayWrap::ptpl))->HasInstance(info[2]))
			{
				VtkStringArrayWrap *a2 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[2]->ToObject());
				vtkSelection * r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->ToValueSelection(
					(vtkSelection *) a0->native.GetPointer(),
					(vtkDataObject *) a1->native.GetPointer(),
					(vtkStringArray *) a2->native.GetPointer()
				);
				VtkSelectionWrap::InitPtpl();
				v8::Local<v8::Value> argv[1] =
					{ Nan::New(vtkNodeJsNoWrap) };
				v8::Local<v8::Function> cons =
					Nan::New<v8::FunctionTemplate>(VtkSelectionWrap::ptpl)->GetFunction();
				v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
				VtkSelectionWrap *w = new VtkSelectionWrap();
				w->native = r;
				w->Wrap(wo);
				info.GetReturnValue().Set(wo);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

