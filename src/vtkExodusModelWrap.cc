/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkExodusModelWrap.h"
#include "vtkUnstructuredGridWrap.h"
#include "vtkModelMetadataWrap.h"
#include "vtkIdTypeArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkExodusModelWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkExodusModelWrap::ptpl;

VtkExodusModelWrap::VtkExodusModelWrap()
{ }

VtkExodusModelWrap::VtkExodusModelWrap(vtkSmartPointer<vtkExodusModel> _native)
{ native = _native; }

VtkExodusModelWrap::~VtkExodusModelWrap()
{ }

void VtkExodusModelWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkExodusModelWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkExodusModel").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ExodusModel").ToLocalChecked(),tpl->GetFunction());
}

void VtkExodusModelWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddUGridElementVariable", AddUGridElementVariable);
	Nan::SetPrototypeMethod(tpl, "addUGridElementVariable", AddUGridElementVariable);

	Nan::SetPrototypeMethod(tpl, "AddUGridNodeVariable", AddUGridNodeVariable);
	Nan::SetPrototypeMethod(tpl, "addUGridNodeVariable", AddUGridNodeVariable);

	Nan::SetPrototypeMethod(tpl, "ExtractExodusModel", ExtractExodusModel);
	Nan::SetPrototypeMethod(tpl, "extractExodusModel", ExtractExodusModel);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetModelMetadata", GetModelMetadata);
	Nan::SetPrototypeMethod(tpl, "getModelMetadata", GetModelMetadata);

	Nan::SetPrototypeMethod(tpl, "HasMetadata", HasMetadata);
	Nan::SetPrototypeMethod(tpl, "hasMetadata", HasMetadata);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "MergeExodusModel", MergeExodusModel);
	Nan::SetPrototypeMethod(tpl, "mergeExodusModel", MergeExodusModel);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PackExodusModel", PackExodusModel);
	Nan::SetPrototypeMethod(tpl, "packExodusModel", PackExodusModel);

	Nan::SetPrototypeMethod(tpl, "RemoveUGridElementVariable", RemoveUGridElementVariable);
	Nan::SetPrototypeMethod(tpl, "removeUGridElementVariable", RemoveUGridElementVariable);

	Nan::SetPrototypeMethod(tpl, "RemoveUGridNodeVariable", RemoveUGridNodeVariable);
	Nan::SetPrototypeMethod(tpl, "removeUGridNodeVariable", RemoveUGridNodeVariable);

	Nan::SetPrototypeMethod(tpl, "Reset", Reset);
	Nan::SetPrototypeMethod(tpl, "reset", Reset);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGlobalInformation", SetGlobalInformation);
	Nan::SetPrototypeMethod(tpl, "setGlobalInformation", SetGlobalInformation);

	Nan::SetPrototypeMethod(tpl, "SetLocalInformation", SetLocalInformation);
	Nan::SetPrototypeMethod(tpl, "setLocalInformation", SetLocalInformation);

	Nan::SetPrototypeMethod(tpl, "SetModelMetadata", SetModelMetadata);
	Nan::SetPrototypeMethod(tpl, "setModelMetadata", SetModelMetadata);

	Nan::SetPrototypeMethod(tpl, "UnpackExodusModel", UnpackExodusModel);
	Nan::SetPrototypeMethod(tpl, "unpackExodusModel", UnpackExodusModel);

}

void VtkExodusModelWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkExodusModel> native = vtkSmartPointer<vtkExodusModel>::New();
		VtkExodusModelWrap* obj = new VtkExodusModelWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkExodusModelWrap::AddUGridElementVariable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->AddUGridElementVariable(
					*a0,
					*a1,
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusModelWrap::AddUGridNodeVariable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				int r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->AddUGridNodeVariable(
					*a0,
					*a1,
					info[2]->Int32Value()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusModelWrap::ExtractExodusModel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkIdTypeArrayWrap *a0 = ObjectWrap::Unwrap<VtkIdTypeArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkUnstructuredGridWrap *a1 = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info[1]->ToObject());
			vtkExodusModel * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->ExtractExodusModel(
				(vtkIdTypeArray *) a0->native.GetPointer(),
				(vtkUnstructuredGrid *) a1->native.GetPointer()
			);
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::Function>(VtkExodusModelWrap::constructor);
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkExodusModelWrap *w = new VtkExodusModelWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusModelWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkExodusModelWrap::GetModelMetadata(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	vtkModelMetadata * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetModelMetadata();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkModelMetadataWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkModelMetadataWrap *w = new VtkModelMetadataWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExodusModelWrap::HasMetadata(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkUnstructuredGridWrap *a0 = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->HasMetadata(
			(vtkUnstructuredGrid *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusModelWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkExodusModelWrap::MergeExodusModel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkExodusModelWrap *a0 = ObjectWrap::Unwrap<VtkExodusModelWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->MergeExodusModel(
			(vtkExodusModel *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusModelWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	vtkExodusModel * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkExodusModelWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkExodusModelWrap *w = new VtkExodusModelWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkExodusModelWrap::PackExodusModel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkUnstructuredGridWrap *a0 = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PackExodusModel(
			(vtkUnstructuredGrid *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusModelWrap::RemoveUGridElementVariable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RemoveUGridElementVariable(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusModelWrap::RemoveUGridNodeVariable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->RemoveUGridNodeVariable(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusModelWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkExodusModelWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkExodusModel * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkExodusModelWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkExodusModelWrap *w = new VtkExodusModelWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusModelWrap::SetGlobalInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->SetGlobalInformation(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusModelWrap::SetLocalInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkUnstructuredGridWrap *a0 = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						int r;
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						r = native->SetLocalInformation(
							(vtkUnstructuredGrid *) a0->native.GetPointer(),
							info[1]->Int32Value(),
							info[2]->Int32Value(),
							info[3]->Int32Value(),
							info[4]->Int32Value()
						);
						info.GetReturnValue().Set(Nan::New(r));
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusModelWrap::SetModelMetadata(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkModelMetadataWrap *a0 = ObjectWrap::Unwrap<VtkModelMetadataWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetModelMetadata(
			(vtkModelMetadata *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkExodusModelWrap::UnpackExodusModel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkExodusModelWrap *wrapper = ObjectWrap::Unwrap<VtkExodusModelWrap>(info.Holder());
	vtkExodusModel *native = (vtkExodusModel *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkUnstructuredGridWrap *a0 = ObjectWrap::Unwrap<VtkUnstructuredGridWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->UnpackExodusModel(
				(vtkUnstructuredGrid *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

